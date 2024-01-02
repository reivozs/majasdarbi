#!/usr/bin/env python3
'''
Python  mājasdarbs Nr.4-1

Uzdevums: aizpildīt vietas ar atzīmi TODO
'''


## Jānis un Andris savu draugu telefonnumurus ir saglabājuši vārdnīcā.
Janis = {"Andris" : "041123451", "Martins" : "041123457", "Santa" : "041123458", "Kristine" : "041123459"}
Andris = {"Janis" : "041123456", "Martins" : "041123457", "Santa" : "041123458", "Kristina" : "041123450"}

## Uzdevums 1 - Izvadīt to draugu vārdus, kuru numuri ir vienādi
numri = [] # TODO 
for nr1 in Janis.items():
    for nr2 in Andris.items():
        if nr1[1] == nr2[1]:
            numri.append(nr1[0])
assert numri == ['Martins', 'Santa']
print("vienādi numuri ir ", numri)

## Uzdevums 2 - Izvadīt to draugu vārdus, kuru numuri ir satopami Jāņa vārdnīcā, be nav Andra
numri = [] # TODO 
for nr1 in Janis:
    if nr1 not in Andris:
        numri.append(nr1)

assert numri == ['Andris', 'Kristine']
print("Jāņa vārdnīcā ir unikāli sekojošie draugi: ", numri)

## Uzdevums 3 - Izvadīt to draugu vārdus, kuru numuri ir sastopami TIKAI Jāņa vārdnīcā vai TIKAI Andra vārdnīcā (unikāli draugi)
numri = [] # TODO 
for nr1 in Andris:
    if nr1 not in Janis:
        numri.append(nr1)

for nr2 in Janis:
    if nr2 not in Andris:
        numri.append(nr2)
assert numri == ['Janis', 'Kristina', 'Andris', 'Kristine']
print("Unikāli draugi ir ", numri)

## Uzdevums 4 - Martins paziņo Jānim un Andrim ka maina telefona numuru. Modificēt abu vārdnīcas
Janis = Janis # TODO 
Andris = Andris # TODO
Janis["Martins"] = "041123400"
Andris["Martins"] = "041123400"
assert Janis == {'Andris': '041123451', 'Martins': '041123400', 'Santa': '041123458', 'Kristine': '041123459'}
assert Andris == {'Janis': '041123456', 'Martins': '041123400', 'Santa': '041123458', 'Kristina': '041123450'}
print("Jāņa Vārdnīca ", Janis)
print("Andra Vārdnīca ", Andris)

## Uzdevums 5 - Andris iepazīstas ar Tomu, kura telefonnumurs ir 041999888. Ievietot Andra vārdnicā jauno draugu.
Andris = Andris # TODO
Andris["Toms"] = "041999888"
assert Andris == {'Janis': '041123456', 'Martins': '041123400', 'Santa': '041123458', 'Kristina': '041123450', 'Toms': '041999888'}
print("Andra Vārdnīca ", Andris)

## Uzdevums 6 - Jānis sastrīdās ar Santu un grib izdzēst viņas numuru.
Janis = Janis # TODO 
Janis.pop("Santa")
assert Janis == {'Andris': '041123451', 'Martins': '041123400', 'Kristine': '041123459'}
print("Jāņa Vārdnīca ", Janis)