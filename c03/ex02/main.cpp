#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "--- Creating ClapTrap ---" << std::endl;
    ClapTrap ct("CLAPPY");
    ct.attack("Target A");
    ct.beRepaired(5);
    ct.takeDamage(3);
    ct.attack("Target B");
    std::cout << "\n--- Creating ScavTrap ---" << std::endl;
    ScavTrap st("SCAVVY");
    st.attack("Target X");
    st.beRepaired(10);
    st.guardGate();
    st.takeDamage(20);
    std::cout << "\n--- End of program ---" << std::endl;
    return 0;
}