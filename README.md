<p align="center">
  <img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white"/>
  <img src="https://img.shields.io/badge/Progetto%20Universitario-blue?style=for-the-badge&logo=github&logoColor=white"/>
  <img src="https://img.shields.io/github/repo-size/MatteoBeccari05/Uni_C?style=for-the-badge&logo=github&logoColor=white"/>
  <img src="https://img.shields.io/github/last-commit/MatteoBeccari05/Uni_C?style=for-the-badge&logo=git&logoColor=white"/>
</p>

# Uni_C — Esercizi in Linguaggio C

*Repository con esercizi svolti all'università in C.*

---

## 🚀 Guida rapida all'uso

1. Clona la repo:

   ```bash
   git clone https://github.com/MatteoBeccari05/Uni_C.git
   ```
2. Vai nella cartella:

   ```bash
   cd Uni_C
   ```
3. Compila un file `.c` con `gcc` (o un altro compilatore C):

   ```bash
   gcc nomefile.c -o programma
   ./programma
   ```
4. (Opzionale) Organizza i tuoi esercizi aggiunti nelle cartelle appropriate prima di fare commit/push.

---

## 🎯 Scopo del progetto

* Centralizzare gli **esercizi svolti durante il corso**
* Avere un archivio ben organizzato per **ripasso futuro**
* Condividere codice utile con altri studenti
* Migliorare con il tempo su organizzazione, commenti, stile

---

## 📁 Struttura principale delle cartelle

```
Uni_C/
├── adt                             # Esercizi su Abstract Data Types
├── array                           # Esercizi sugli array
├── array_puntatori                 # Array e puntatori combinati
├── char                            # Gestione dei caratteri
├── controllo_di_flusso             # If, switch, cicli e connettivi logici
├── debug                           # Esercizi di debugging
├── enum                            # Esempi di enumerazioni
├── esercizi_0210                   # Esercizi vari del 02/10
├── file                            # Gestione file I/O
├── funzioni                        # Esercizi con funzioni
├── iterazione                      # Cicli for, while, do-while
├── make                            # Progetti con più file e Makefile
├── multi-file                      # Progetti multi-file con header separati
├── numeri_virgola                  # Esercizi su float e double
├── primi_esercizi                  # Esercizi base iniziali
├── puntatori                       # Puntatori e gestione memoria indiretta
├── stringhe                        # Manipolazione stringhe
├── struct                          # Strutture dati
├── tutorato                        # Esercizi svolti durante i tutorati
├── union                           # Esercizi con union
├── variabili                       # Esercizi su variabili e operatori
```

---

## 📊 Statistiche Repository

![Linguaggio](https://img.shields.io/badge/Linguaggio-C-00599C?style=flat-square)
![Aggiornamento Automatico](https://img.shields.io/badge/Statistiche-Auto--aggiornate-brightgreen?style=flat-square)

| Metrica | Valore |
|---------|--------|
| 📄 **File C totali** | *Aggiornato automaticamente* |
| 📋 **File Header (.h)** | *Aggiornato automaticamente* |
| 📝 **Righe di codice** | *Aggiornato automaticamente* |
| 📁 **Categorie di esercizi** | 24 |
| 📊 **Media righe/file** | *Calcolata automaticamente* |

### 📁 Distribuzione per categoria

*Le statistiche dettagliate per categoria vengono aggiornate automaticamente ad ogni push.*

### 🔄 Come funziona

Le statistiche vengono aggiornate automaticamente tramite GitHub Actions:
- ✅ Ad ogni push sul branch principale
- ✅ Ogni domenica alle 00:00 (aggiornamento settimanale)
- ✅ Manualmente tramite l'interfaccia GitHub Actions

*📅 Ultimo aggiornamento: Generato automaticamente*

---

## 📌 Note pratiche

* Fai attenzione ai **nomi dei file / convenzioni** (es. `es5.c`, `es6_funzione.c`)
* Aggiungi sempre un breve **commento all'inizio** del file per spiegare lo scopo
* Le soluzioni sono orientate alla chiarezza e all'apprendimento, non sempre all'ottimizzazione estrema

---

## 🛠️ Setup per le statistiche automatiche

Per attivare l'aggiornamento automatico delle statistiche:

1. Crea la cartella `.github/workflows/` nella root del progetto
2. Salva il file `update-stats.yml` dentro questa cartella
3. Fai commit e push - le statistiche si aggiorneranno automaticamente!

```bash
mkdir -p .github/workflows
# Copia il file update-stats.yml nella cartella
git add .github/workflows/update-stats.yml
git commit -m "Aggiungi workflow per statistiche automatiche"
git push
```