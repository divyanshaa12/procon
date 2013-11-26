#include <string>
void test(std::string input, std::string expect);
void testloader(){ //insert test cases here
/*0*/ test( "41,33,26,55,74,58,68", "39" );    
/*1*/ test( "00,99,09,90", "-" );    
/*2*/ test( "09", "3" );    
/*3*/ test( "05,05,05", "3" );    
/*4*/ test( "45", "3" );    
/*5*/ test( "38,39", "3" );    
/*6*/ test( "38,47", "3" );    
/*7*/ test( "45,66", "4" );    
/*8*/ test( "12,34,56,78", "33" );    
/*9*/ test( "12,34,56,78,45", "37" );    
/*10*/ test( "00,09,00", "11" );    
/*11*/ test( "00,90", "11" );    
/*12*/ test( "99,09", "11" );    
/*13*/ test( "99,90", "11" );    
/*14*/ test( "11,12,21,22", "5" );    
/*15*/ test( "42,45,92,95,83,62", "25" );    
/*16*/ test( "42,45,92,83,62", "14" );    
/*17*/ test( "34,38,78,74,56,35,77,48,54", "26" );    
/*18*/ test( "38,78,74,56,35,77,48,54", "23" );    
/*19*/ test( "31,41,21,71,21", "7" );    
/*20*/ test( "46,45,42,44,45", "6" );    
/*21*/ test( "00,99,09", "19" );    
/*22*/ test( "99,09,90,24", "64" );    
/*23*/ test( "99,16,61,34,17,24,42,26,18,71,19,91,81,43,33,62,52,25", "75" );    
/*24*/ test( "55,43,16,91,61,19,24,18,33,34,71,81,42,62,52,26,17,25", "53" );    
/*25*/ test( "71,26,81,62,17,16,25,42,33,52,19,18,91,24,61,34,43", "45" );    
/*26*/ test( "39,49,19,93,78,58,48,91,95,29,68,92,86,87,94,77", "39" );    
/*27*/ test( "69,89,25,26,58,12,37,36,68,24,11,13,48,14,79", "37" );    
/*28*/ test( "58,67,92,38,83,29,91,76,84,57,75,48,85,19,66", "51" );    
/*29*/ test( "00,83,76,85,48,19,75,29,92,57,66,67,91,58,38,84", "91" );    
/*30*/ test( "11,92,57,38,58,66,91,67,84,48,83,19,75,85,76,29", "72" );    
/*31*/ test( "36,07,45", "9" );    
/*32*/ test( "57,23,24,74", "21" );    
/*33*/ test( "92,20,32,12,65", "39" );    
/*34*/ test( "24,54,66,48,54,15", "21" );    
/*35*/ test( "05,17,42,20,48,22,13", "39" );    
/*36*/ test( "53,84,55,56,25,14,84,43", "26" );    
/*37*/ test( "06,77,56,59,15,24,09,66,71", "51" );    
/*38*/ test( "53,36,47,45,45,67,66,46,63,75", "21" );    
/*39*/ test( "35,53,93,33,02,84,83,48,54,32,28", "50" );    
/*40*/ test( "55,74,32,84,41,64,24,44,15,14,26,53", "39" );    
/*41*/ test( "47,60,34,32,19,67,24,83,94,38,47,05,79", "88" );    
/*42*/ test( "63,32,42,74,66,64,35,41,74,25,48,62,44,54", "42" );    
/*43*/ test( "00,86,16,19,09,92,51,10,68,23,14,63,21,46,03", "91" );    
/*44*/ test( "56,46,54,14,15,25,53,84,58,85,44,37,54,76,26,76", "42" );    
/*45*/ test( "71,87,39,43,76,38,91,69,98,33,43,26,56,69,73,52,89", "66" );    
/*46*/ test( "43,26,84,64,52,48,36,23,66,53,41,57,76,36,84,57,35,41", "47" );    
/*47*/ test( "81,02,85,93,36,46,80,27,72,28,02,99,13,41,36,40,18,97,38", "91" );    
/*48*/ test( "63,46,75,58,42,26,58,37,14,75,35,63,32,36,52,46,85,14,48,23", "47" );    
/*49*/ test( "66,92,64,12,17,33,10,28,75,05,81,05,42,86,52,57,56,78,87,81,10", "82" );    
/*50*/ test( "48,25,58,76,15,74,43,44,24,62,33,67,34,34,42,48,37,33,51,43,46,67", "50" );
}