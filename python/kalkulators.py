import sys

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

def veikt_aprekinus(darbiba,skaitlis_1,skaitlis_2):

    def check_float(skaitlis):
        if skaitlis.isnumeric():
            return float(skaitlis)
        else:
            exit("Nav numerisks skaitlis")

    if darbiba == "+":
        skaitlis_1 = check_float(skaitlis_1)
        skaitlis_2 = check_float(skaitlis_2)
        print("Rezultāts: ", summa(skaitlis_1,skaitlis_2))
    elif darbiba == "-":
        skaitlis_1 = check_float(skaitlis_1)
        skaitlis_2 = check_float(skaitlis_2)
        print("Rezultāts: ", atnemsana(skaitlis_1,skaitlis_2))
    elif darbiba == "*":
        skaitlis_1 = check_float(skaitlis_1)
        skaitlis_2 = check_float(skaitlis_2)
        print("Rezultāts: ", multiplikacija(skaitlis_1,skaitlis_2))
    elif darbiba == "/":
        skaitlis_1 = check_float(skaitlis_1)
        skaitlis_2 = check_float(skaitlis_2)
        print("Rezultāts: ", dalisana(skaitlis_1,skaitlis_2))
    elif darbiba == "eksp":
        skaitlis_1 = check_float(skaitlis_1)
        skaitlis_2 = check_float(skaitlis_2)
        print("Rezultāts: ", eksponenta(skaitlis_1,skaitlis_2))
    else:
        exit("Darbība netiek atļauta. Izvēlaties [+ , - , * , / , eksp ]")

# Iegūst ievadi no termināļa
ievade = sys.argv

veikt_aprekinus(ievade[2],ievade[1],ievade[3])
