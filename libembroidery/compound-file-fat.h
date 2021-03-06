/*! @file compound-file-fat.h */
#ifndef COMPOUND_FILE_FAT_H
#define COMPOUND_FILE_FAT_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h> /* TODO: replace this with "emb-file.h" when FILE is ported to EmbFile */

typedef struct _bcf_file_fat
{
    int             fatEntryCount;
    unsigned int    fatEntries[255]; /* maybe make this dynamic */
    unsigned int    numberOfEntriesInFatSector;
} bcf_file_fat;

bcf_file_fat* bcfFileFat_create(const unsigned int sectorSize);
void loadFatFromSector(bcf_file_fat* fat, FILE* file);
void bcf_file_fat_free(bcf_file_fat* fat);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* COMPOUND_FILE_FAT_H */

/* kate: bom off; indent-mode cstyle; indent-width 4; replace-trailing-space-save on; */
