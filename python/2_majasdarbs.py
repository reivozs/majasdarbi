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


def parbaudit_ievadi(ievade):

    def check_float(skaitlis)->float:
        if skaitlis.isnumeric():
            return float(skaitlis)
        else:
            exit()

    if ievade == '+':
        skaitlis_1 = input("Ievadīt pirmo vērtību summēšanai:")
        skaitlis_1 = check_float( skaitlis_1 )
        skaitlis_2 = input("Ievadīt otro vērtību summēšanai:")
        skaitlis_2 = check_float( skaitlis_2 )
        print("rezultāts: ", summa(skaitlis_1,skaitlis_2))
    elif ievade == '-':
        skaitlis_1 = input("Ievadīt pirmo vērtību atņemšanai:")
        skaitlis_1 = check_float( skaitlis_1 )
        skaitlis_2 = input("Ievadīt otro vērtību atņemšanai:")
        skaitlis_2 = check_float( skaitlis_2 )
        print("rezultāts: ", atnemsana(skaitlis_1,skaitlis_2))
    elif ievade == '*':
        skaitlis_1 = input("Ievadīt pirmo vērtību multiplicēšanai:")
        skaitlis_1 = check_float( skaitlis_1 )  
        skaitlis_2 = input("Ievadīt otro vērtību multiplicēšanai:")
        skaitlis_2 = check_float( skaitlis_2 )     
        print("rezultāts: ", multiplikacija(skaitlis_1,skaitlis_2))
    elif ievade == '/':
        skaitlis_1 = input("Ievadīt pirmo vērtību dalīšanai:")
        skaitlis_1 = check_float( skaitlis_1 )  
        skaitlis_2 = input("Ievadīt otro vērtību dalīšanai:")
        skaitlis_2 = check_float( skaitlis_2 )  
        print("rezultāts: ", dalisana(skaitlis_1,skaitlis_2))
    elif ievade == 'eksp':
        skaitlis_1 = input("Ievadīt bāzēs vērtību eksponentai:")
        skaitlis_1 = check_float( skaitlis_1 )       
        skaitlis_2 = input("Ievadīt pakāpes vērtību eksponentai:")
        skaitlis_2 = check_float( skaitlis_2 )    
        print("rezultāts: ", eksponenta(skaitlis_1,skaitlis_2))
    else:
        print("operācija nav atrasta. Izvēlēties  [+ , - , * , / , eksp  ]")
        exit()


## Šeit sākās maģija
ievade = input("Vēlamo darbību, atļauts [+ , - , * , / , eksp  ]: ")

parbaudit_ievadi(ievade)

## Šo daļu nedzēst!
#assert summa(1,2) == 3
#assert atnemsana(3,1) == 2
#assert multiplikacija(1,2) == 2
#assert dalisana(2,2) == 1
#assert eksponenta(2,2) == 4