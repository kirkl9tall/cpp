#include "PmergeMe.hpp"

int parseInt(const char* str)
{
    char* end;
    long value = std::strtol(str, &end, 10);

    if (*end != '\0')
        throw std::runtime_error("Error");

    if (value < 0 || value > std::numeric_limits<int>::max())
        throw std::runtime_error("Error");

    return static_cast<int>(value);
}

std::vector<size_t> buildOrder(size_t n)
{
    std::vector<size_t> order;

    if (n == 0)
        return order;

    order.push_back(0);

    size_t j0 = 0;
    size_t j1 = 1;
    std::vector<size_t> jac;

    while (j1 < n)
    {
        jac.push_back(j1);
        size_t next = j1 + 2 * j0;
        j0 = j1;
        j1 = next;
    }

    size_t prev = 1;

    for (size_t k = 1; k < jac.size(); ++k)
    {
        for (int i = static_cast<int>(jac[k]) - 1;
             i >= static_cast<int>(prev);
             --i)
        {
            order.push_back(i);
        }
        prev = jac[k];
    }

    for (size_t i = prev; i < n; ++i)
        order.push_back(i);

    return order;
}

std::deque<int> fun1_deque(std::deque<int> &container)
{
    if (container.size() <= 1)
        return container;

    size_t i = 0;
    std::deque<int> main_ch;
    std::deque<std::pair<int,int> > pairs;

    bool hasStraggler = false;
    int straggler = 0;

    while (i < container.size())
    {
        if (i + 1 < container.size())
        {
            int a = container[i];
            int b = container[i+1];

            if (a < b)
                pairs.push_back(std::make_pair(a, b));
            else
                pairs.push_back(std::make_pair(b, a));
        }
        else
        {
            hasStraggler = true;
            straggler = container[i];
        }
        i += 2;
    }

    for (size_t i = 0; i < pairs.size(); i++)
        main_ch.push_back(pairs[i].second);

    main_ch = fun1_deque(main_ch);

    std::map<int,std::pair<int,int> > pairMap;
    
    for (size_t i = 0; i < pairs.size(); ++i)
        pairMap[pairs[i].second] = pairs[i];

    std::deque<std::pair<int,int> > ordered_pairs;
    for (size_t i = 0; i < main_ch.size(); ++i)
        ordered_pairs.push_back(pairMap[main_ch[i]]);

    std::deque<int> result;

    for (size_t i = 0; i < ordered_pairs.size(); ++i)
        result.push_back(ordered_pairs[i].second);

    result.insert(result.begin(), ordered_pairs[0].first);

    std::vector<size_t> order = buildOrder(ordered_pairs.size());

    for (size_t k = 1; k < order.size(); ++k)
    {
        size_t idx = order[k];
        int value = ordered_pairs[idx].first;
        int winner = ordered_pairs[idx].second;

        size_t pos =
            std::lower_bound(result.begin(), result.end(), winner)
            - result.begin();

        size_t left = 0;
        size_t right = pos;

        while (left < right)
        {
            size_t mid = (left + right) / 2;

            if (value < result[mid])
                right = mid;
            else
                left = mid + 1;
        }

        result.insert(result.begin() + left, value);
    }

    if (hasStraggler)
    {
        size_t left = 0;
        size_t right = result.size();

        while (left < right)
        {
            size_t mid = (left + right) / 2;

            if (straggler < result[mid])
                right = mid;
            else
                left = mid + 1;
        }

        result.insert(result.begin() + left, straggler);
    }

    return result;
}

std::vector<int> fun1(std::vector<int> &container)
{
    if (container.size() <= 1)
        return container;

    size_t i = 0;
    std::vector<int> main_ch;
    std::vector<std::pair<int,int> > pairs;

    bool hasStraggler = false;
    int straggler = 0;

    while (i < container.size())
    {
        if (i + 1 < container.size())
        {
            int a = container[i];
            int b = container[i+1];

            if (a < b)
                pairs.push_back(std::make_pair(a, b));
            else
                pairs.push_back(std::make_pair(b, a));
        }
        else
        {
            hasStraggler = true;
            straggler = container[i];
        }
        i += 2;
    }

    for (size_t i = 0; i < pairs.size(); i++)
        main_ch.push_back(pairs[i].second);

    main_ch = fun1(main_ch);

    std::map<int, std::pair<int,int> > pairMap;
    for (size_t i = 0; i < pairs.size(); ++i)
        pairMap[pairs[i].second] = pairs[i];

    std::vector<std::pair<int,int> > ordered_pairs;
    for (size_t i = 0; i < main_ch.size(); ++i)
        ordered_pairs.push_back(pairMap[main_ch[i]]);

    std::vector<int> result;

    for (size_t i = 0; i < ordered_pairs.size(); ++i)
        result.push_back(ordered_pairs[i].second);

    result.insert(result.begin(), ordered_pairs[0].first);

    std::vector<size_t> order = buildOrder(ordered_pairs.size());

    for (size_t k = 1; k < order.size(); ++k)
    {
        size_t idx = order[k];
        int value = ordered_pairs[idx].first;
        int winner = ordered_pairs[idx].second;

        size_t pos =
            std::lower_bound(result.begin(), result.end(), winner)
            - result.begin();

        size_t left = 0;
        size_t right = pos;

        while (left < right)
        {
            size_t mid = (left + right) / 2;

            if (value < result[mid])
                right = mid;
            else
                left = mid + 1;
        }

        result.insert(result.begin() + left, value);
    }

    if (hasStraggler)
    {
        size_t left = 0;
        size_t right = result.size();

        while (left < right)
        {
            size_t mid = (left + right) / 2;

            if (straggler < result[mid])
                right = mid;
            else
                left = mid + 1;
        }

        result.insert(result.begin() + left, straggler);
    }

    return result;
}