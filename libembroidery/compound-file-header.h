/*! @file compound-file-header.h */
#ifndef COMPOUND_FILE_HEADER_H
#define COMPOUND_FILE_HEADER_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h> /* TODO: replace this with "emb-file.h" when FILE is ported to EmbFile */

typedef struct _bcf_file_header
{
    unsigned char    signature[8];
    unsigned char    CLSID[16]; /* TODO: this should be a separate type */
    unsigned short   minorVersion;
    unsigned short   majorVersion;
    unsigned short   byteOrder;
    unsigned short   sectorShift;
    unsigned short   miniSectorShift;
    unsigned short   reserved1;
    unsigned int     reserved2;
    unsigned int     numberOfDirectorySectors;
    unsigned int     numberOfFATSectors;
    unsigned int     firstDirectorySectorLocation;
    unsigned int     transactionSignatureNumber;
    unsigned int     miniStreamCutoffSize;
    unsigned int     firstMiniFATSectorLocation;
    unsigned int     numberOfMiniFatSectors;
    unsigned int     firstDifatSectorLocation;
    unsigned int     numberOfDifatSectors;
} bcf_file_header;

bcf_file_header bcfFileHeader_read(FILE* file);
int bcfFileHeader_isValid(bcf_file_header header);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* COMPOUND_FILE_HEADER_H */

/* kate: bom off; indent-mode cstyle; indent-width 4; replace-trailing-space-save on; */
