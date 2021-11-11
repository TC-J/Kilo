# Kilo
Cross-Platform Runtime Engine

## Operational Overview
Kilo is a shared-library that defines the entry-point (main) inside its header.

The Engineer tailors the Runtime to a use-case through a singleton instance of the Runtime class.

The bridging function between the engine and engineer is the following:
`void Instantiate(Kilo::Runtime *rt);`

Inside this function, so called 'User Modules' will be added by the engineer, as well as the main Runtime Drivers (functions defined by the engineer that 'drive' certain areas of the runtime).

### User Modules (UM)
A User Module (UM) is a set of UI-Components (UICs) along with the UM's drivers.

It is analogous to an HTML document; it contains the UI and the logic for handling events on the UI
