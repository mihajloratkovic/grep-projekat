# grep-projekat

Ovaj projekat je jednostavna implementacija programa sličnog `grep`-u, napisana u programskom jeziku C. Program omogućava korisniku da pronađe linije u tekstualnom fajlu koje sadrže određeni pojam za pretragu.

## Opis

Program uzima dve komande kao argumente:

1. Reč koju treba tražiti
2. Naziv fajla u kojem se pretraga vrši

Za svaku liniju u fajlu koja sadrži zadatu reč, program ispisuje tu liniju.

## Korišćenje

### Kompajliranje

U terminalu pokrenuti sledeću komandu (u direktorijumu gde se nalazi `mygrep.c` fajl):

```bash
gcc -o mygrep mygrep.c
```

### Pokretanje programa

Primer pokretanja programa:

```bash
./mygrep rec test.txt
```

Gde je `rec` reč koju tražimo, a `test.txt` ime fajla koji pretražujemo.

## Struktura projekta

```
grep-projekat/
│
├── mygrep.c       // Glavni izvorni C kod
├── test.txt       // Fajl za testiranje
└── README.md      // Opis projekta
```
# grep-projekat

Ovaj projekat je jednostavna implementacija programa sličnog `grep`-u, napisana u programskom jeziku C. Program omogućava korisniku da pronađe linije u tekstualnom fajlu koje sadrže određeni pojam za pretragu.

## Opis

Program uzima dve komande kao argumente:

1. Reč koju treba tražiti
2. Naziv fajla u kojem se pretraga vrši

Za svaku liniju u fajlu koja sadrži zadatu reč, program ispisuje tu liniju.

## Korišćenje

### Kompajliranje

U terminalu pokrenuti sledeću komandu (u direktorijumu gde se nalazi `mygrep.c` fajl):

```bash
gcc -o mygrep mygrep.c
```

### Pokretanje programa

Primer pokretanja programa:

```bash
./mygrep rec test.txt
```

Gde je `rec` reč koju tražimo, a `test.txt` ime fajla koji pretražujemo.

## Struktura projekta

```
grep-projekat/
│
├── mygrep.c       // Glavni izvorni C kod
├── test.txt       // Fajl za testiranje
└── README.md      // Opis projekta
```
## Primer izlaza

$ ./mygrep rec test.txt
2: Ova linija sadrži rec.
4: Završna linija sa rec.

## Napomena

Ovaj program je deo  projekta na predmetu Arhitektura racunara i operativni sistemi  koji zahteva rad sa C programskim jezikom u Linux okruženju. Projekat je testiran u Fedora Linux distribuciji u VirtualBox okruženju.

## Autor

Mihajlo Ratković – student Fakulteta organizacionih nauka  
GitHub: https://github.com/mihajloratkovic

