#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"
#include "parser.h"

int main(int argc, char **argv) {

  screen s;
  color c;
  c.red = 0;
  c.green = 255;
  c.blue = 100;
  struct matrix * edges;
  struct matrix * transform;

  edges = new_matrix(4, 4);
  transform = new_matrix(4, 4);

  /* print_matrix( make_bezier() ); */
  /* printf("\n"); */
  /* print_matrix( make_hermite() ); */

  if ( argc == 2 )
    parse_file( argv[1], transform, edges, s );
  else
    parse_file( "stdin", transform, edges, s );
/*
  clear_screen(s);
  add_box(edges, 270, 220, 100, 300, 250, 240);
  add_sphere(edges, 260, 400, 30, 30, 100); 
  add_torus(edges, 200, 350, 70, 60, 40, 100);
  matrix_mult(make_rotY(1), edges);
  matrix_mult(make_rotX(5), edges);
  matrix_mult(make_translate(50, 370, 0), edges);
  draw_lines(edges, s, c);
  save_ppm(s, "box.ppm");
  */
  free_matrix( edges );
  free_matrix( transform );
}  
