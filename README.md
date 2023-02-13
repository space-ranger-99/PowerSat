# PowerSat :zap:

This project provides a simulation of a power management for a satellite consisting of a battery, a solar panel, and a load. The simulation updates the state of the components over time and outputs the results to the standard output stream.

# Prerequisites

- C++17 or later
- A C++ compiler, such as GCC or Clang

# Building and Running the Project
1. Clone the repository to your local machine.
2. Change to the project directory.
3. Compile the project using the following command: `g++ -std=c++17 *.cpp -o power_sat`
4. Run the project using the following command: `./power_sat`

# Design and Architecture

The power management simulation is implemented using C++ classes. The following classes are defined:

- `component`: A base class for all components in the system. It defines a virtual `update` method that must be implemented by derived classes.
- `battery`: A derived class of `component` that represents a battery. It has a voltage and current, and implements the update method to update the voltage based on the current.
- `solar_panel`: A derived class of `component` that represents a solar panel. It has a current, and implements the `update` method to limit the current to a maximum value.
- `load`: A derived class of `component` that represents a load. It has a current, and implements the `update` method to limit the current to a maximum value.
- `system`: A class that represents the power management system. It has references to instances of `battery`, `solar_panel`, and `load`, and implements the `run` method to simulate the system over a specified number of time steps.

The components interact as follows:

- The `battery` receives a current from the `solar_panel` in the `betteryCharger` method of the `system` class
- The `solar_panel` regulates its current int he `solarPanelRegulator` method of the `system` class
- The `load` limits its current in the `loadSwitch` method of the `system` class

# Testing

The project includes simple test files for each class in the `tests` directory. The tests verify the initial values of the components and the output of the simulation after running for a specified number of time steps.

To run the tests, compile and run each test file using the following commands:

```
g++ -std=c++17 battery_test.cpp -o battery_test
./battery_test
```
```
g++ -std=c++17 solar_panel_test.cpp -o solar_panel_test
./solar_panel_test
```
```
g++ -std=c++17 load_test.cpp -o load_test
./load_test
```
```
g++ -std=c++17 system_test.cpp -o system_test
./system_test
```

# Deployment and Usage

To deploy the power management system simulation, compile the project as described in the "Building and Running the Project" section and run the executable file on your target platform.

# Contributing

To contribute to the project, please follow the following steps:

1. Fork the repository to your GitHub account.
2. Clone the repository to your local machine.
3. Create a new branch for your changes.
4. Make your changes and commit them to your branch.
5. Push the branch to your GitHub repository.
6. Create a pull request to merge your changes into the main repository.

Please follow the existing code style and naming conventions when making changes to the project.

# Future Work

There are several planned improvements for this project, including

- Adding more components to the system
- Improving the accuracy of the simulation by using more advanced models for the components
- Implementing a user interface to interact with the simulation

# Acknowledgements

This project makes use of the following open-source libraries:

- The C++ Standard Library

# References

- "The C++ Programming Language" by Bjarne Stroustrup

# License

This project is licensed under the MIT License. See the LICENSE file for more details.

# Contact Information

For any questions or concerns, please open an issue on the GitHub repository or contact me directly.