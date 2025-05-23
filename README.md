# mygrep – Program nalik `grep`

Ovaj program omogućava korisniku da pretražuje tekst u fajlu na osnovu zadate reči (stringa). Napravljen je u programskom jeziku C.

## Kompajliranje

```bash
gcc -o mygrep mygrep.c

## Primer izlaza

$ ./mygrep rec test.txt
2: Ova linija sadrži rec.
4: Završna linija sa rec.
