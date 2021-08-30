![icon](/docs/ApolloBlind_2.gif)

# ApolloBlind 👁
![LICENSE](https://img.shields.io/github/license/Nicolas-albu/ApolloBlind?style=flat-square)
![VERSION](https://img.shields.io/github/manifest-json/v/Nicolas-albu/ApolloBlind?style=flat-square)

⚠ This project is still in development.

## 👩‍🚀 The Repository

🚀 ApolloBlind is a repository of a project initialy based on **Arduino Micro** (ATMega32U4), to help the Visually Impaired. (Version 0.1).

Currently at version 0.2, we are trying to use the **ATTiny82** microprocessor, with the PIR sensor and
vibration motor, with 3V coin battery and Transistor NPN.

![gif](https://media3.giphy.com/media/11sBLVxNs7v6WA/giphy.gif?cid=790b76114d64313ac5227152fbef63bd95f3d0176ff2f890&rid=giphy.gif&ct=g)

## 🎲 Table of Contents
- [ApolloBlind 👁](#apolloblind-)
  - [👩‍🚀 The Repository](#-the-repository)
  - [🎲 Table of Contents](#-table-of-contents)
  - [🧾 Non-functional Requirements](#-non-functional-requirements)
  - [🔌 Components](#-components)
  - [🛠 Scheme](#-scheme)
  - [💻 Coding](#-coding)
    - [Configuration of Sensor PIR1](#configuration-of-sensor-pir1)
    - [Configuration of Motor of Vibration M1](#configuration-of-motor-of-vibration-m1)
  - [🤝 Contributing](#-contributing)
  - [👽 Futures changes](#-futures-changes)
  - [🔓 License](#-license)

## 🧾 Non-functional Requirements

Price: ?
Size: ?
Weight: ?
Potency: ?

## 🔌 Components

**VERSION 0.2**
| Name | Quantity | Component 
| ---- | -------- | --------- 
| U1   | 1        | ATTiny85
| PIR1 | 1        | Sensor PIR
| M1   | 1        | Motor of Vibration
| Bat1 | 1        | 3V Coin type Battery
| T1   | 1        | Transistor NPN (BJT)
| R1   | 1        | 1 kΩ Resistor 

## 🛠 Scheme

![red](https://via.placeholder.com/15/FF0000/000000?text=+) `Positive` 
![black](https://via.placeholder.com/15/000000/000000?text=+) `Negative (GND)`
![green](https://via.placeholder.com/15/008000/000000?text=+) `Signal`

**VERSION 0.2**

![scheme-2](/docs/Scheme-2.PNG)

**VERSION 0.1**

![scheme](/docs/Scheme.PNG)

## 💻 Coding 
### Configuration of Sensor PIR1

We define a global constant for the PIR Sensor pin.
```cpp
#define PIN_PIR A4
```
And we added a conditional in loop(), always checking if the PIR Sensor detected any movement at 3m.
```cpp
int valuePresence = digitalRead(PIN_PIR);
if (valuePresence == HIGH){...} 
else if (valuePresence == LOW){...}
```

### Configuration of Motor of Vibration M1

We define a global constant for the PIR Sensor pin.
```cpp
#define PIN_VIBRATOR A1
```
When the PIR Sensor receives motion information, it outputs to the vibration motor port, otherwise nothing happens.
```cpp
digitalWrite(PIN_VIBRATOR, HIGH);
digitalWrite(PIN_VIBRATOR, LOW);
```

## 🤝 Contributing

There are many ways in which you can participate in this project, for example:

* [Submit bugs and feature requests](https://github.com/Nicolas-albu/ApolloBlind/issues), and help us verify as they are checked in
* Review [source code changes](https://github.com/Nicolas/ApolloBlind/pulls)

If you are interested in fixing issues and contributing directly to the code base or scheme,
please see the document [How to Contribute](https://github.com/Nicolas-albu/ApolloBlind/wiki).

## 👽 Futures changes

- [X] Switch from a prefabricated board (Arduino Micro) to a custom one, to lower energy usage. (**ATTiny82**)
- [X] :battery: Choose a battery for the ApolloBlind, or (**3V Coin type Battery**)
- [ ] :electric_plug: Make the device rechargeable.
- [ ] Add an ON/OFF button on the custom board.
- [ ] Build a cover in 3d structure.

## 🔓 License

Copyright (c) 2021 Nícolas Albuquerque Ramos. All rights reserved.

Licensed under the [MIT](https://github.com/Nicolas-albu/ApolloBlind/blob/main/LICENSE) license.
