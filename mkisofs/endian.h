/*
 * This file has been modified for the cdrkit suite.
 *
 * The behaviour and appearence of the program code below can differ to a major
 * extent from the version distributed by the original author(s).
 *
 * For details, see Changelog file distributed with the cdrkit package. If you
 * received this file from another source then ask the distributing person for
 * a log of modifications.
 *
 */

void                  write_be64  __PR((unsigned long long in, unsigned char *out));
unsigned long long    read_be64   __PR((unsigned char *in));
void                  write_le64  __PR((unsigned long long in, unsigned char *out));
unsigned long long    read_le64   __PR((unsigned char *in));

void                  write_le48  __PR((unsigned long long in, unsigned char *out));
unsigned long long    read_le48   __PR((unsigned char *in));

void                  write_be32  __PR((unsigned long in, unsigned char *out));
unsigned long         read_be32   __PR((unsigned char *in));
void                  write_le32  __PR((unsigned long in, unsigned char *out));
unsigned long         read_le32   __PR((unsigned char *in));

void                  write_be16  __PR((unsigned short in, unsigned char *out));
unsigned short        read_be16   __PR((unsigned char *in));
void                  write_le16  __PR((unsigned short in, unsigned char *out));
unsigned short        read_le16   __PR((unsigned char *in));
