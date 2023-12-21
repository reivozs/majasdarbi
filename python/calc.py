#!/usr/bin/env python3

## 1. uzdevums 
def summa(skaitlis_1,skaitlis_2):

    res = skaitlis_1 + skaitlis_2
    return res
    
## 2. uzdevums
def atnemsana(skaitlis_1,skaitlis_2):

    res = skaitlis_1 - skaitlis_2
    return res

## 3. uzdevums
def multiplikacija(skaitlis_1,skaitlis_2):

    res = skaitlis_1 * skaitlis_2
    return res

## 4. uzdevums
def dalisana(skaitlis_1,skaitlis_2):

    res = skaitlis_1 / skaitlis_2
    return res

## 5. uzdevums
def eksponenta(skaitlis_1, skaitlis_2):
    
    res = pow(skaitlis_1,skaitlis_2)
    return res

## Šo daļu nedzēst!
assert summa(1,2) == 3
assert atnemsana(3,1) == 2
assert multiplikacija(1,2) == 2
assert dalisana(2,2) == 1
assert eksponenta(2,2) == 4