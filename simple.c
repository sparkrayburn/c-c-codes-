#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
    system("cls");

  float basic, da, hra, gross, esic, pf, net, tds, total;
  const float con = 1600;
  const  meds = 1250;
  printf("Enter your Basic :\t|");
  scanf("%f", &basic);


  da = 0.1 * basic;
  hra = .5 * basic + da;
  gross = hra + basic + da + meds + con;
  esic = 4.75 * gross /100;
  pf = 0.12 * basic;
  net = gross - pf - esic;
  tds = 0.05 * net;
  total = net - tds;
  printf("Basic = \t| %.0f\n", basic);
  printf("DA = \t\t| %.0f\n", da);
  printf("HRS = \t\t| %.0f\n", hra);
  printf("Conveyance = \t| %.0f\n", con);
  printf("Medical = \t| %.0f\n", meds);
  printf("Gross = \t| %.0f\n", gross);
  printf("ESIC = \t\t| %.0f\n", esic);
  printf("Provident Fund =| %.0f\n", pf);
  printf("Net before tax =| %.0f\n", net);
  printf("TDS = \t\t| %.0f\n", tds);
  printf("Salary in hand =| %.0f\n", total);




}