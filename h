import random

# Seznam předem nahraných vět
vety = [
    "Jo",
    "Vážně to potřebujeme?",
    "Hm",
    "Tvoje hlava se nudí, tak vytváří nové problémy",
    "Špagety se dávají do vroucí vody. ",
    "Víš, že ti to auto jede.",
    "Na brambory se nepoužívá cedník.",
    "Ve vesnici nejezdíme přes 50."
]

# Funkce pro generování náhodné věty
def generuj_vetu():
    return random.choice(vety)

# Hlavní program
if __name__ == "__main__":
    print("Vítej v generátoru chytrých vět,užij si hloubku každé myšlenky.")
    while True:
        # Generuje náhodnou větu
        print("\nTady je tvoje věta:")
        print(generuj_vetu())
        
        # Zeptá se uživatele, zda chce pokračovat
        odpoved = input("\nChceš další větu? (ano/ne): ").strip().lower()
        if odpoved != "ano":
            print("Děkuji za použití generátoru. Měj krásný den!")
            break
