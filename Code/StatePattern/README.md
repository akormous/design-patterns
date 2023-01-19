# Gumball Machine

Imagine we have a gumball machine (a machine that dispenses gum balls when you feed it a coin, similar to a vending machine). We have to write an interface for this Gumball Machine. The state diagram of the machine is given below:


## Gumball Machine state diagram

There are mainly 4 states:
1. No Coin
2. Has Coin 
3. Gumball sold
4. Out of gumballs (Sold out)

```mermaid
stateDiagram-v2

state gumball_count <<choice>>
nq : No coin
hq : Has coin
gs : Gumball Sold
oog: Out of Gumballs

[*] --> nq

nq --> hq : Insert coin
hq --> nq : Eject coin

hq --> gs : Turns crank
gs --> gumball_count
gumball_count --> nq: if gumballs > 0 (Dispense)
gumball_count --> oog: if gumballs = 0
oog --> nq : Refill
```

## Gumball Machine state diagram v2

Lucky winner (10% chance) to get 2 gumballs instead of 1
```mermaid
stateDiagram-v2

state gumball_count <<choice>>
state gumball_count_w <<choice>>
oog: Out of Gumballs
w : Winner
nq : No coin
hq : Has coin
gs : Gumball Sold


[*] --> nq

nq --> hq : Insert coin
hq --> nq : Eject coin
hq --> w : Lucky winner (10% logic)
hq --> gs : Turns crank

w --> gumball_count_w
gumball_count_w --> nq : if gumballs > 0 (Dispense 2)
gumball_count_w --> oog : if gumballs = 0
gs --> gumball_count
gumball_count --> nq: if gumballs > 0 (Dispense 1)
gumball_count --> oog: if gumballs = 0
oog --> nq : Refill
```

## Class Diagram

```mermaid
classDiagram

class State {
    <<interface>>
    insertCoin()
    ejectCoin()
    turnCrank()
    dispense()
}

class SoldState {
    // gumball sold state
    insertCoin()
    ejectCoin()
    turnCrank()
    dispense()
}

class SoldOutState {
    // out of gumballs
    insertCoin()
    ejectCoin()
    turnCrank()
    dispense()
} 

class HasCoinState {
    // has coin
    insertCoin()
    ejectCoin()
    turnCrank()
    dispense()
}

class NoCoinState {
    // no coin : initial
    insertCoin()
    ejectCoin()
    turnCrank()
    dispense()
}

class GumballMachine {
    +GumballMachine(int n)
    +insertCoin()
    +ejectCoin()
    +turnCrank()
    -State noCoin
    -State hasCoin
    -State soldOut
    -State sold
    -State curState // current state
    ... // getters and setters
}

State <.. SoldState
State <.. SoldOutState
State <.. HasCoinState
State <.. NoCoinState

GumballMachine --> State
```