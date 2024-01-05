int main(int argc, char *argv[])
{
  int len_x, len_y, maxl;
  float score;
  len_x = read_seq(argv[1], x);
  len_y = read_seq(argv[2], y);
  score = align(len_x, len_y);
  /* print_matrix(len_x, len_y); */
  maxl = traceback(len_x-1, len_y-1);
  printf("score %f\n", score);
  print_result(maxl);
  
  return 0;
}
