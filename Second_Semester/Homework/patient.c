#include <stdio.h>
#include <string.h>

struct Patient {
    char tcKimlikNo[12];
    char ad[50];
    int yas;
    char hastalik[100];
};

// Add patient record to the file
void addPatientRecord(const struct Patient* patient) {
    FILE* indexFile = fopen("index.txt", "a");
    FILE* dataFile = fopen("data.dat", "ab");

    fseek(dataFile, 0, SEEK_END);
    long id = ftell(dataFile) / sizeof(struct Patient);

    fprintf(indexFile, "%s %ld\n", patient->tcKimlikNo, id);
    fwrite(patient, sizeof(struct Patient), 1, dataFile);

    fclose(indexFile);
    fclose(dataFile);
}

// Read patient record from the file using TC Identity Number
void readPatientRecord(const char* tcKimlikNo) {
    FILE* indexFile = fopen("index.txt", "r");
    FILE* dataFile = fopen("data.dat", "rb");

    char tc[12];
    long id;
    while (fscanf(indexFile, "%s %ld", tc, &id) == 2) {
        if (strcmp(tc, tcKimlikNo) == 0) {
            struct Patient patient;
            fseek(dataFile, id * sizeof(struct Patient), SEEK_SET);
            fread(&patient, sizeof(struct Patient), 1, dataFile);
            printf("Patient Information:\n");
            printf("TC Identity Number: %s\n", patient.tcKimlikNo);
            printf("Name: %s\n", patient.ad);
            printf("Age: %d\n", patient.yas);
            printf("Disease: %s\n", patient.hastalik);
            fclose(indexFile);
            fclose(dataFile);
            return;
        }
    }

    printf("Patient not found.\n");

    fclose(indexFile);
    fclose(dataFile);
}

// Delete patient record from the file using TC Identity Number
void deletePatientRecord(const char* tcKimlikNo) {
    FILE* indexFile = fopen("index.txt", "r");
    FILE* dataFile = fopen("data.dat", "rb+");
    FILE* tempFile = fopen("temp.dat", "wb");

    char tc[12];
    long id;
    int found = 0;
    while (fscanf(indexFile, "%s %ld", tc, &id) == 2) {
        if (strcmp(tc, tcKimlikNo) == 0) {
            found = 1;
            continue;
        }

        struct Patient patient;
        fseek(dataFile, id * sizeof(struct Patient), SEEK_SET);
        fread(&patient, sizeof(struct Patient), 1, dataFile);
        fwrite(&patient, sizeof(struct Patient), 1, tempFile);
    }

    fclose(indexFile);
    fclose(dataFile);
    fclose(tempFile);

    remove("data.dat");
    rename("temp.dat", "data.dat");

    if (found) {
        printf("Patient record deleted successfully.\n");
    } else {
        printf("Patient not found.\n");
    }
}

// Update patient record in the file using TC Identity Number
void updatePatientRecord(const char* tcKimlikNo, const struct Patient* newPatient) {
    FILE* indexFile = fopen("index.txt", "r");
    FILE* dataFile = fopen("data.dat", "rb+");
    FILE* tempFile = fopen("temp.dat", "wb");

    char tc[12];
    long id;
    int found = 0;
    while (fscanf
    (indexFile, "%s %ld", tc, &id) == 2) {
if (strcmp(tc, tcKimlikNo) == 0) {
found = 1;
fwrite(newPatient, sizeof(struct Patient), 1, tempFile);
} else {
struct Patient patient;
fseek(dataFile, id * sizeof(struct Patient), SEEK_SET);
fread(&patient, sizeof(struct Patient), 1, dataFile);
fwrite(&patient, sizeof(struct Patient), 1, tempFile);
}
}
fclose(indexFile);
fclose(dataFile);
fclose(tempFile);

remove("data.dat");
rename("temp.dat", "data.dat");

if (found) {
    printf("Patient record updated successfully.\n");
} else {
    printf("Patient not found.\n");
}
}

// List all patient records from the file
void listPatientRecords() {
FILE* indexFile = fopen("index.txt", "r");
FILE* dataFile = fopen("data.dat", "rb");

char tc[12];
long id;
while (fscanf(indexFile, "%s %ld", tc, &id) == 2) {
    struct Patient patient;
    fseek(dataFile, id * sizeof(struct Patient), SEEK_SET);
    fread(&patient, sizeof(struct Patient), 1, dataFile);
    printf("TC Identity Number: %s\n", patient.tcKimlikNo);
    printf("Name: %s\n", patient.ad);
    printf("Age: %d\n", patient.yas);
    printf("Disease: %s\n", patient.hastalik);
    printf("------------------------\n");
}

fclose(indexFile);
fclose(dataFile);
}

int main() {
struct Patient newPatient;

strcpy(newPatient.tcKimlikNo, "12345678901");
strcpy(newPatient.ad, "Ali");
newPatient.yas = 30;
strcpy(newPatient.hastalik, "Alerji");
addPatientRecord(&newPatient);

strcpy(newPatient.tcKimlikNo, "98765432109");
strcpy(newPatient.ad, "Ayşe");
newPatient.yas = 25;
strcpy(newPatient.hastalik, "Grip");
addPatientRecord(&newPatient);

readPatientRecord("12345678901");

deletePatientRecord("98765432109");

strcpy(newPatient.tcKimlikNo, "12345678901");
strcpy(newPatient.ad, "Ali Can");
newPatient.yas = 32;
strcpy(newPatient.hastalik, "Alerji");
updatePatientRecord("12345678901", &newPatient);

listPatientRecords();

return 0;
}