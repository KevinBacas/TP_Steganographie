#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "error.h"
#include "file.h"
#include "vector.h"
#include "matrix.h"
#include "hamming_code.h"
#include "PGM.h"
#include "stegano.h"



int main(void)
{
  
  char
    img_ori[]     = "images/lena.pgm",
    img_stegano[] = "images/lena_stegano.pgm",
    img_diff[]    = "images/lena_diff.pgm",
    txt_ori[]     = "images/test.txt",
    txt_ext[]     = "images/extraction.txt";
  hcode *C;

  pgm
    *ori,
    *stego;

  uint
    i, 
    j,
    w,
    h;

  FILE*
    diff_file;
 
  printf("Creating the Hamming code: ");
  /* TODO */

  printf("OK\n");


  printf("Embed '%s' into '%s' which produces '%s': ", txt_ori, img_ori, img_stegano);
  /* TODO */

  printf("OK\n");


  printf("Extract '%s' into '%s': ", img_stegano, txt_ext);
  /* TODO */

  printf("OK\n");


  printf("Free the memory: ");
  /* TODO */

  printf("OK\n");

  return(0);
}