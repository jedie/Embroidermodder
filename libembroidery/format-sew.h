/*! @file format-sew.h */
#ifndef FORMAT_SEW_H
#define FORMAT_SEW_H

#ifdef __cplusplus
extern "C" {
#endif

#include "emb-pattern.h"

int readSew(EmbPattern* pattern, const char* fileName);
int writeSew(EmbPattern* pattern, const char* fileName);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* FORMAT_SEW_H */

/* kate: bom off; indent-mode cstyle; indent-width 4; replace-trailing-space-save on; */
