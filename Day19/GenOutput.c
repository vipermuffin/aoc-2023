#include "GenOutput.h"
#include <cstdint>   //INT_MIN, INT_MAX, etc.

//Function Prototypes
uint64_t runWorkflows(void);
uint64_t runWorkflows2(void);

//Implementation
uint64_t runWorkflows() {
   uint64_t acc = 0;
   acc += in(674,504,708,190) ? (674 + 504 + 708 + 190) : 0;
   acc += in(1977,955,492,199) ? (1977 + 955 + 492 + 199) : 0;
   acc += in(973,239,1114,895) ? (973 + 239 + 1114 + 895) : 0;
   acc += in(2492,586,261,366) ? (2492 + 586 + 261 + 366) : 0;
   acc += in(246,458,409,2758) ? (246 + 458 + 409 + 2758) : 0;
   acc += in(11,2756,201,610) ? (11 + 2756 + 201 + 610) : 0;
   acc += in(1982,303,852,1034) ? (1982 + 303 + 852 + 1034) : 0;
   acc += in(292,1674,455,987) ? (292 + 1674 + 455 + 987) : 0;
   acc += in(1931,11,677,2542) ? (1931 + 11 + 677 + 2542) : 0;
   acc += in(94,649,499,3519) ? (94 + 649 + 499 + 3519) : 0;
   acc += in(1580,2150,279,1677) ? (1580 + 2150 + 279 + 1677) : 0;
   acc += in(2417,89,461,2054) ? (2417 + 89 + 461 + 2054) : 0;
   acc += in(2336,1850,701,620) ? (2336 + 1850 + 701 + 620) : 0;
   acc += in(156,382,2737,1918) ? (156 + 382 + 2737 + 1918) : 0;
   acc += in(755,2961,18,90) ? (755 + 2961 + 18 + 90) : 0;
   acc += in(1947,2548,553,212) ? (1947 + 2548 + 553 + 212) : 0;
   acc += in(751,44,164,1889) ? (751 + 44 + 164 + 1889) : 0;
   acc += in(3169,674,1021,2474) ? (3169 + 674 + 1021 + 2474) : 0;
   acc += in(1497,181,119,1587) ? (1497 + 181 + 119 + 1587) : 0;
   acc += in(539,544,419,316) ? (539 + 544 + 419 + 316) : 0;
   acc += in(6,401,197,1127) ? (6 + 401 + 197 + 1127) : 0;
   acc += in(1000,1923,1216,303) ? (1000 + 1923 + 1216 + 303) : 0;
   acc += in(337,2847,28,196) ? (337 + 2847 + 28 + 196) : 0;
   acc += in(1160,1659,2631,1362) ? (1160 + 1659 + 2631 + 1362) : 0;
   acc += in(2529,1084,782,295) ? (2529 + 1084 + 782 + 295) : 0;
   acc += in(166,2057,1125,408) ? (166 + 2057 + 1125 + 408) : 0;
   acc += in(403,1340,240,87) ? (403 + 1340 + 240 + 87) : 0;
   acc += in(995,32,700,2418) ? (995 + 32 + 700 + 2418) : 0;
   acc += in(2101,185,1065,113) ? (2101 + 185 + 1065 + 113) : 0;
   acc += in(2401,197,919,75) ? (2401 + 197 + 919 + 75) : 0;
   acc += in(1923,264,1242,1135) ? (1923 + 264 + 1242 + 1135) : 0;
   acc += in(1933,333,1498,1729) ? (1933 + 333 + 1498 + 1729) : 0;
   acc += in(1538,1014,848,269) ? (1538 + 1014 + 848 + 269) : 0;
   acc += in(327,85,1567,2822) ? (327 + 85 + 1567 + 2822) : 0;
   acc += in(432,757,212,808) ? (432 + 757 + 212 + 808) : 0;
   acc += in(57,1258,238,717) ? (57 + 1258 + 238 + 717) : 0;
   acc += in(70,2015,1416,1303) ? (70 + 2015 + 1416 + 1303) : 0;
   acc += in(257,511,129,951) ? (257 + 511 + 129 + 951) : 0;
   acc += in(238,1033,604,3386) ? (238 + 1033 + 604 + 3386) : 0;
   acc += in(658,81,791,185) ? (658 + 81 + 791 + 185) : 0;
   acc += in(3388,3054,324,633) ? (3388 + 3054 + 324 + 633) : 0;
   acc += in(623,249,254,1479) ? (623 + 249 + 254 + 1479) : 0;
   acc += in(866,2012,304,355) ? (866 + 2012 + 304 + 355) : 0;
   acc += in(812,1109,1275,44) ? (812 + 1109 + 1275 + 44) : 0;
   acc += in(98,1284,451,2276) ? (98 + 1284 + 451 + 2276) : 0;
   acc += in(1247,299,2631,2892) ? (1247 + 299 + 2631 + 2892) : 0;
   acc += in(290,134,289,214) ? (290 + 134 + 289 + 214) : 0;
   acc += in(92,1430,2197,2446) ? (92 + 1430 + 2197 + 2446) : 0;
   acc += in(527,2690,1252,398) ? (527 + 2690 + 1252 + 398) : 0;
   acc += in(1384,428,2041,983) ? (1384 + 428 + 2041 + 983) : 0;
   acc += in(132,582,135,700) ? (132 + 582 + 135 + 700) : 0;
   acc += in(9,3777,225,722) ? (9 + 3777 + 225 + 722) : 0;
   acc += in(985,804,616,1369) ? (985 + 804 + 616 + 1369) : 0;
   acc += in(918,1500,83,706) ? (918 + 1500 + 83 + 706) : 0;
   acc += in(95,3210,636,3462) ? (95 + 3210 + 636 + 3462) : 0;
   acc += in(43,745,298,684) ? (43 + 745 + 298 + 684) : 0;
   acc += in(757,55,1412,373) ? (757 + 55 + 1412 + 373) : 0;
   acc += in(1510,1041,1845,875) ? (1510 + 1041 + 1845 + 875) : 0;
   acc += in(616,3062,15,347) ? (616 + 3062 + 15 + 347) : 0;
   acc += in(2,2623,2602,813) ? (2 + 2623 + 2602 + 813) : 0;
   acc += in(603,265,2180,2416) ? (603 + 265 + 2180 + 2416) : 0;
   acc += in(1929,185,104,2) ? (1929 + 185 + 104 + 2) : 0;
   acc += in(1553,628,1445,1909) ? (1553 + 628 + 1445 + 1909) : 0;
   acc += in(5,684,131,225) ? (5 + 684 + 131 + 225) : 0;
   acc += in(504,299,397,2108) ? (504 + 299 + 397 + 2108) : 0;
   acc += in(677,1117,1555,23) ? (677 + 1117 + 1555 + 23) : 0;
   acc += in(2374,67,744,738) ? (2374 + 67 + 744 + 738) : 0;
   acc += in(583,751,49,1063) ? (583 + 751 + 49 + 1063) : 0;
   acc += in(1024,83,41,3129) ? (1024 + 83 + 41 + 3129) : 0;
   acc += in(1644,41,1396,1262) ? (1644 + 41 + 1396 + 1262) : 0;
   acc += in(1425,918,550,1209) ? (1425 + 918 + 550 + 1209) : 0;
   acc += in(2566,593,1715,120) ? (2566 + 593 + 1715 + 120) : 0;
   acc += in(79,3043,1607,17) ? (79 + 3043 + 1607 + 17) : 0;
   acc += in(38,553,138,1260) ? (38 + 553 + 138 + 1260) : 0;
   acc += in(344,773,624,714) ? (344 + 773 + 624 + 714) : 0;
   acc += in(433,1373,1018,1720) ? (433 + 1373 + 1018 + 1720) : 0;
   acc += in(2791,505,2,1289) ? (2791 + 505 + 2 + 1289) : 0;
   acc += in(2566,1484,1736,1326) ? (2566 + 1484 + 1736 + 1326) : 0;
   acc += in(589,72,669,987) ? (589 + 72 + 669 + 987) : 0;
   acc += in(147,2890,186,2412) ? (147 + 2890 + 186 + 2412) : 0;
   acc += in(2993,370,337,1676) ? (2993 + 370 + 337 + 1676) : 0;
   acc += in(13,740,965,2421) ? (13 + 740 + 965 + 2421) : 0;
   acc += in(226,997,1655,224) ? (226 + 997 + 1655 + 224) : 0;
   acc += in(169,1064,747,292) ? (169 + 1064 + 747 + 292) : 0;
   acc += in(421,2632,305,1308) ? (421 + 2632 + 305 + 1308) : 0;
   acc += in(1890,75,1397,1701) ? (1890 + 75 + 1397 + 1701) : 0;
   acc += in(606,506,1084,2742) ? (606 + 506 + 1084 + 2742) : 0;
   acc += in(1657,1864,853,3122) ? (1657 + 1864 + 853 + 3122) : 0;
   acc += in(1045,160,538,1130) ? (1045 + 160 + 538 + 1130) : 0;
   acc += in(455,17,73,349) ? (455 + 17 + 73 + 349) : 0;
   acc += in(93,2149,415,2065) ? (93 + 2149 + 415 + 2065) : 0;
   acc += in(1188,62,1063,997) ? (1188 + 62 + 1063 + 997) : 0;
   acc += in(470,18,791,3445) ? (470 + 18 + 791 + 3445) : 0;
   acc += in(1721,1686,2238,259) ? (1721 + 1686 + 2238 + 259) : 0;
   acc += in(239,2291,483,11) ? (239 + 2291 + 483 + 11) : 0;
   acc += in(2027,81,3275,96) ? (2027 + 81 + 3275 + 96) : 0;
   acc += in(819,46,453,449) ? (819 + 46 + 453 + 449) : 0;
   acc += in(117,1088,1230,773) ? (117 + 1088 + 1230 + 773) : 0;
   acc += in(252,742,514,986) ? (252 + 742 + 514 + 986) : 0;
   acc += in(205,22,2211,809) ? (205 + 22 + 2211 + 809) : 0;
   acc += in(115,1837,237,1455) ? (115 + 1837 + 237 + 1455) : 0;
   acc += in(534,557,615,499) ? (534 + 557 + 615 + 499) : 0;
   acc += in(281,115,276,487) ? (281 + 115 + 276 + 487) : 0;
   acc += in(1251,1574,2895,279) ? (1251 + 1574 + 2895 + 279) : 0;
   acc += in(1198,22,739,2758) ? (1198 + 22 + 739 + 2758) : 0;
   acc += in(265,1510,57,491) ? (265 + 1510 + 57 + 491) : 0;
   acc += in(1969,2065,751,1838) ? (1969 + 2065 + 751 + 1838) : 0;
   acc += in(685,68,1972,1377) ? (685 + 68 + 1972 + 1377) : 0;
   acc += in(950,811,84,2) ? (950 + 811 + 84 + 2) : 0;
   acc += in(1086,2871,2039,565) ? (1086 + 2871 + 2039 + 565) : 0;
   acc += in(2717,537,3939,483) ? (2717 + 537 + 3939 + 483) : 0;
   acc += in(601,853,232,1089) ? (601 + 853 + 232 + 1089) : 0;
   acc += in(1569,44,1186,542) ? (1569 + 44 + 1186 + 542) : 0;
   acc += in(1092,2131,1038,197) ? (1092 + 2131 + 1038 + 197) : 0;
   acc += in(58,812,2388,1182) ? (58 + 812 + 2388 + 1182) : 0;
   acc += in(930,36,1376,3343) ? (930 + 36 + 1376 + 3343) : 0;
   acc += in(848,232,1115,929) ? (848 + 232 + 1115 + 929) : 0;
   acc += in(568,386,971,1750) ? (568 + 386 + 971 + 1750) : 0;
   acc += in(451,635,1297,203) ? (451 + 635 + 1297 + 203) : 0;
   acc += in(99,49,506,308) ? (99 + 49 + 506 + 308) : 0;
   acc += in(358,1180,517,420) ? (358 + 1180 + 517 + 420) : 0;
   acc += in(175,401,1410,649) ? (175 + 401 + 1410 + 649) : 0;
   acc += in(979,1784,598,115) ? (979 + 1784 + 598 + 115) : 0;
   acc += in(889,1439,13,1879) ? (889 + 1439 + 13 + 1879) : 0;
   acc += in(400,1053,59,639) ? (400 + 1053 + 59 + 639) : 0;
   acc += in(3143,175,504,205) ? (3143 + 175 + 504 + 205) : 0;
   acc += in(994,398,184,885) ? (994 + 398 + 184 + 885) : 0;
   acc += in(491,958,286,593) ? (491 + 958 + 286 + 593) : 0;
   acc += in(1497,1865,1612,346) ? (1497 + 1865 + 1612 + 346) : 0;
   acc += in(1202,1779,758,297) ? (1202 + 1779 + 758 + 297) : 0;
   acc += in(2601,2275,677,1262) ? (2601 + 2275 + 677 + 1262) : 0;
   acc += in(882,1044,1383,572) ? (882 + 1044 + 1383 + 572) : 0;
   acc += in(412,508,328,1150) ? (412 + 508 + 328 + 1150) : 0;
   acc += in(2492,994,2541,1180) ? (2492 + 994 + 2541 + 1180) : 0;
   acc += in(3773,1018,416,602) ? (3773 + 1018 + 416 + 602) : 0;
   acc += in(1046,156,7,398) ? (1046 + 156 + 7 + 398) : 0;
   acc += in(100,414,408,1308) ? (100 + 414 + 408 + 1308) : 0;
   acc += in(2398,53,997,679) ? (2398 + 53 + 997 + 679) : 0;
   acc += in(3306,745,1497,2100) ? (3306 + 745 + 1497 + 2100) : 0;
   acc += in(1409,472,626,1220) ? (1409 + 472 + 626 + 1220) : 0;
   acc += in(313,425,2505,1729) ? (313 + 425 + 2505 + 1729) : 0;
   acc += in(572,262,345,588) ? (572 + 262 + 345 + 588) : 0;
   acc += in(125,196,142,1155) ? (125 + 196 + 142 + 1155) : 0;
   acc += in(1865,650,195,1986) ? (1865 + 650 + 195 + 1986) : 0;
   acc += in(326,556,996,2082) ? (326 + 556 + 996 + 2082) : 0;
   acc += in(1146,2905,3842,563) ? (1146 + 2905 + 3842 + 563) : 0;
   acc += in(266,1916,1820,168) ? (266 + 1916 + 1820 + 168) : 0;
   acc += in(312,1281,1392,1117) ? (312 + 1281 + 1392 + 1117) : 0;
   acc += in(134,60,1445,1930) ? (134 + 60 + 1445 + 1930) : 0;
   acc += in(172,457,147,407) ? (172 + 457 + 147 + 407) : 0;
   acc += in(109,684,2070,30) ? (109 + 684 + 2070 + 30) : 0;
   acc += in(3067,2067,1842,581) ? (3067 + 2067 + 1842 + 581) : 0;
   acc += in(1848,1989,94,360) ? (1848 + 1989 + 94 + 360) : 0;
   acc += in(1226,1920,161,924) ? (1226 + 1920 + 161 + 924) : 0;
   acc += in(1556,75,3280,838) ? (1556 + 75 + 3280 + 838) : 0;
   acc += in(313,265,1420,3463) ? (313 + 265 + 1420 + 3463) : 0;
   acc += in(593,898,798,2173) ? (593 + 898 + 798 + 2173) : 0;
   acc += in(792,69,583,1191) ? (792 + 69 + 583 + 1191) : 0;
   acc += in(510,1318,3384,39) ? (510 + 1318 + 3384 + 39) : 0;
   acc += in(707,1060,69,1165) ? (707 + 1060 + 69 + 1165) : 0;
   acc += in(87,711,1788,3063) ? (87 + 711 + 1788 + 3063) : 0;
   acc += in(111,674,521,311) ? (111 + 674 + 521 + 311) : 0;
   acc += in(2429,180,423,469) ? (2429 + 180 + 423 + 469) : 0;
   acc += in(10,1406,1553,37) ? (10 + 1406 + 1553 + 37) : 0;
   acc += in(2552,2002,29,27) ? (2552 + 2002 + 29 + 27) : 0;
   acc += in(1292,459,25,668) ? (1292 + 459 + 25 + 668) : 0;
   acc += in(135,2835,3638,989) ? (135 + 2835 + 3638 + 989) : 0;
   acc += in(2770,697,1741,244) ? (2770 + 697 + 1741 + 244) : 0;
   acc += in(1180,1643,342,1597) ? (1180 + 1643 + 342 + 1597) : 0;
   acc += in(778,849,1024,44) ? (778 + 849 + 1024 + 44) : 0;
   acc += in(180,294,1821,1508) ? (180 + 294 + 1821 + 1508) : 0;
   acc += in(640,1349,251,678) ? (640 + 1349 + 251 + 678) : 0;
   acc += in(478,223,173,2054) ? (478 + 223 + 173 + 2054) : 0;
   acc += in(68,292,493,2233) ? (68 + 292 + 493 + 2233) : 0;
   acc += in(826,83,156,664) ? (826 + 83 + 156 + 664) : 0;
   acc += in(37,275,376,3953) ? (37 + 275 + 376 + 3953) : 0;
   acc += in(36,1172,294,961) ? (36 + 1172 + 294 + 961) : 0;
   acc += in(809,1526,1070,2408) ? (809 + 1526 + 1070 + 2408) : 0;
   acc += in(794,838,52,461) ? (794 + 838 + 52 + 461) : 0;
   acc += in(719,672,2313,285) ? (719 + 672 + 2313 + 285) : 0;
   acc += in(422,206,1187,38) ? (422 + 206 + 1187 + 38) : 0;
   acc += in(260,44,1419,907) ? (260 + 44 + 1419 + 907) : 0;
   acc += in(626,642,1119,242) ? (626 + 642 + 1119 + 242) : 0;
   acc += in(409,21,1514,1736) ? (409 + 21 + 1514 + 1736) : 0;
   acc += in(512,42,300,1166) ? (512 + 42 + 300 + 1166) : 0;
   acc += in(2017,1748,499,1428) ? (2017 + 1748 + 499 + 1428) : 0;
   acc += in(985,238,549,686) ? (985 + 238 + 549 + 686) : 0;
   acc += in(324,339,2028,427) ? (324 + 339 + 2028 + 427) : 0;
   acc += in(1835,103,253,53) ? (1835 + 103 + 253 + 53) : 0;
   acc += in(218,1176,96,1588) ? (218 + 1176 + 96 + 1588) : 0;
   acc += in(1012,2361,1186,807) ? (1012 + 2361 + 1186 + 807) : 0;
   acc += in(215,614,405,1814) ? (215 + 614 + 405 + 1814) : 0;
   acc += in(994,1458,185,1300) ? (994 + 1458 + 185 + 1300) : 0;
   acc += in(524,407,437,538) ? (524 + 407 + 437 + 538) : 0;
   acc += in(51,967,856,1887) ? (51 + 967 + 856 + 1887) : 0;
   acc += in(1331,2397,1318,1620) ? (1331 + 2397 + 1318 + 1620) : 0;
   acc += in(1162,1564,1,424) ? (1162 + 1564 + 1 + 424) : 0;
   acc += in(1725,1047,873,744) ? (1725 + 1047 + 873 + 744) : 0;
   acc += in(1276,1541,686,942) ? (1276 + 1541 + 686 + 942) : 0;
   acc += in(880,412,2187,1720) ? (880 + 412 + 2187 + 1720) : 0;

   return acc;
}
uint64_t runWorkflows2() {
   uint64_t acc = 0;
    bool initX = in(1,1,1,1);
   for(auto x = 1; x <= 4000; x++) {
       cout << x << endl;
       bool initM = in(x,1,1,1);
      for(auto m = 1; m <= 4000; m++) {
          bool initA = in(x,m,1,1);
         for(auto a = 1; a <= 4000; a++) {
             bool initS = in(x,m,a,1);
            for(auto s = 1; s <= 4000; s++) {
                auto result = in(x,m,a,s) ? 1 : 0;
                if(initS) {
                    if(result) {
                        acc++;
                    }
                } else if(result) {
                    acc += 4000-s;
                    s=4001;
                }
            }
         }
      }
   }

   return acc;
}

inline bool vr(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>3414 ? true : false);
}

inline bool lx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>2140 ? true : true);
}

inline bool vkm(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>411 ? true : (a>443 ? false : true));
}

inline bool nr(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>1463 ? false : true);
}

inline bool xd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>375 ? false : (x<2704 ? false : false));
}

inline bool zq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<2226 ? true : false);
}

inline bool sgf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>923 ? kq(x,m,a,s) : (a<801 ? sc(x,m,a,s) : (x<3251 ? tt(x,m,a,s) : gm(x,m,a,s))));
}

inline bool pqh(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3259 ? false : (a>1418 ? false : (s<3015 ? true : false)));
}

inline bool cg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3220 ? false : (m<3292 ? true : (a>856 ? false : false)));
}

inline bool lsf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>424 ? false : false);
}

inline bool cbn(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>2375 ? pvh(x,m,a,s) : qgf(x,m,a,s));
}

inline bool tl(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<3706 ? mf(x,m,a,s) : (x<3839 ? srt(x,m,a,s) : (s<2265 ? vdg(x,m,a,s) : fjb(x,m,a,s))));
}

inline bool rlp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<657 ? false : (a<2605 ? true : (a>2875 ? true : true)));
}

inline bool hgt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>3010 ? true : true);
}

inline bool lbp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1791 ? false : (x>2941 ? dbs(x,m,a,s) : (s>3208 ? true : sxh(x,m,a,s))));
}

inline bool dc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<559 ? false : false);
}

inline bool pqm(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<1994 ? false : true);
}

inline bool kg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<2866 ? zv(x,m,a,s) : (a<532 ? mfx(x,m,a,s) : dc(x,m,a,s)));
}

inline bool zz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<204 ? true : (m>3750 ? true : ct(x,m,a,s)));
}

inline bool mq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<3238 ? xzl(x,m,a,s) : qfs(x,m,a,s));
}

inline bool csg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<1938 ? true : (m<1995 ? false : true));
}

inline bool dr(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>3338 ? fl(x,m,a,s) : (a>3276 ? vc(x,m,a,s) : true));
}

inline bool gc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3488 ? true : (m<2931 ? false : (x<1506 ? false : false)));
}

inline bool pqx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<1518 ? false : (x<1605 ? false : (s<3006 ? false : false)));
}

inline bool cc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>1777 ? pdz(x,m,a,s) : (s>358 ? nfp(x,m,a,s) : rd(x,m,a,s)));
}

inline bool cmb(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<758 ? kbc(x,m,a,s) : (a>2913 ? vdt(x,m,a,s) : (a>2448 ? dm(x,m,a,s) : kv(x,m,a,s))));
}

inline bool xq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3071 ? tlf(x,m,a,s) : (s<1142 ? vdf(x,m,a,s) : (s>1530 ? gv(x,m,a,s) : bbc(x,m,a,s))));
}

inline bool cn(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>919 ? slj(x,m,a,s) : (a>3064 ? fr(x,m,a,s) : zll(x,m,a,s)));
}

inline bool cfd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>1470 ? true : (s>2179 ? true : (m<840 ? hg(x,m,a,s) : zcf(x,m,a,s))));
}

inline bool dm(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>2757 ? mmz(x,m,a,s) : (m>1033 ? xz(x,m,a,s) : (a>2638 ? gbh(x,m,a,s) : false)));
}

inline bool rrm(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>716 ? xg(x,m,a,s) : (x<586 ? dzv(x,m,a,s) : mjb(x,m,a,s)));
}

inline bool xhl(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3908 ? false : (a>1503 ? true : (a>1326 ? false : true)));
}

inline bool zg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>710 ? true : (m<549 ? false : false));
}

inline bool pls(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>1189 ? mv(x,m,a,s) : (a<1598 ? zs(x,m,a,s) : (s>762 ? ms(x,m,a,s) : cc(x,m,a,s))));
}

inline bool tps(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<940 ? mj(x,m,a,s) : (x<3337 ? true : sm(x,m,a,s)));
}

inline bool lvq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<1898 ? false : (s<2829 ? true : (m>3485 ? true : false)));
}

inline bool mqt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>1462 ? false : true);
}

inline bool in(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>1983 ? bz(x,m,a,s) : (m<1782 ? js(x,m,a,s) : (m>2851 ? hl(x,m,a,s) : ktm(x,m,a,s))));
}

inline bool gx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<1066 ? true : false);
}

inline bool sv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<2026 ? false : (x>2775 ? bqt(x,m,a,s) : nc(x,m,a,s)));
}

inline bool fsg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<152 ? true : (s<3348 ? false : false));
}

inline bool zrk(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>875 ? true : (m<416 ? false : false));
}

inline bool tmx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>3571 ? false : (m>238 ? false : false));
}

inline bool btg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>3104 ? true : false);
}

inline bool fj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<1633 ? ltm(x,m,a,s) : kgs(x,m,a,s));
}

inline bool bs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1535 ? false : false);
}

inline bool kdr(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>1967 ? false : false);
}

inline bool vbl(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<600 ? mpb(x,m,a,s) : (s>1964 ? zr(x,m,a,s) : ptr(x,m,a,s)));
}

inline bool crk(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>3107 ? tz(x,m,a,s) : (x>801 ? false : true));
}

inline bool lc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3491 ? kr(x,m,a,s) : xq(x,m,a,s));
}

inline bool kqx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>2976 ? kdd(x,m,a,s) : (m>2909 ? nps(x,m,a,s) : (a<1520 ? bv(x,m,a,s) : cts(x,m,a,s))));
}

inline bool lv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1310 ? true : (x>2652 ? true : true));
}

inline bool zxs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<875 ? true : ccd(x,m,a,s));
}

inline bool szl(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>466 ? kjx(x,m,a,s) : (a<454 ? jcc(x,m,a,s) : true));
}

inline bool ghm(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>833 ? false : false);
}

inline bool fzt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<1870 ? psf(x,m,a,s) : (a<1621 ? gr(x,m,a,s) : (m<3600 ? lvq(x,m,a,s) : ddt(x,m,a,s))));
}

inline bool hqv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<948 ? true : (a<507 ? true : (a<738 ? szr(x,m,a,s) : true)));
}

inline bool fmj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<2475 ? false : (s<2910 ? true : (a>251 ? true : false)));
}

inline bool zsg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>2629 ? false : true);
}

inline bool cgx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<1207 ? jv(x,m,a,s) : kqh(x,m,a,s));
}

inline bool lt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<3161 ? true : (m<3426 ? true : (x<2128 ? true : false)));
}

inline bool qsz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3289 ? false : (x>2566 ? xf(x,m,a,s) : false));
}

inline bool pc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<3779 ? false : (m<783 ? btp(x,m,a,s) : mh(x,m,a,s)));
}

inline bool vt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>3274 ? false : (x<2529 ? false : hqd(x,m,a,s)));
}

inline bool rk(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<639 ? false : mqt(x,m,a,s));
}

inline bool xdl(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3533 ? false : false);
}

inline bool vbp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>3091 ? zrk(x,m,a,s) : (x>2865 ? true : qz(x,m,a,s)));
}

inline bool nx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>3353 ? false : fmj(x,m,a,s));
}

inline bool hmg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<2202 ? true : false);
}

inline bool gv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<1581 ? false : (s<1739 ? true : (x>1695 ? dzj(x,m,a,s) : false)));
}

inline bool mfq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<1846 ? true : (s>2187 ? true : false));
}

inline bool zl(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<3740 ? qtg(x,m,a,s) : true);
}

inline bool sr(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>1500 ? rcj(x,m,a,s) : qnb(x,m,a,s));
}

inline bool kpc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>741 ? gk(x,m,a,s) : kgj(x,m,a,s));
}

inline bool prc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3259 ? false : (a<1739 ? true : (a>1851 ? true : false)));
}

inline bool sqj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>1393 ? pqx(x,m,a,s) : (x<1312 ? rs(x,m,a,s) : (x>1340 ? false : false)));
}

inline bool dbh(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<2248 ? cj(x,m,a,s) : qx(x,m,a,s));
}

inline bool zk(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>1944 ? true : (x<2918 ? true : true));
}

inline bool bdh(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>3416 ? false : true);
}

inline bool bfj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>2398 ? false : (a<2234 ? true : false));
}

inline bool qkl(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<1740 ? pp(x,m,a,s) : (a<435 ? xx(x,m,a,s) : mk(x,m,a,s)));
}

inline bool bb(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>935 ? false : (m>508 ? true : (x>2922 ? true : false)));
}

inline bool skb(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>1570 ? true : (m<3271 ? true : (x>3470 ? true : false)));
}

inline bool zxh(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3566 ? true : false);
}

inline bool zhx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<1421 ? xv(x,m,a,s) : true);
}

inline bool pd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3229 ? true : false);
}

inline bool gs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3374 ? vk(x,m,a,s) : (m<3046 ? kqx(x,m,a,s) : kt(x,m,a,s)));
}

inline bool jjr(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>2310 ? lmr(x,m,a,s) : jdq(x,m,a,s));
}

inline bool hd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>3385 ? false : (a>1113 ? false : (x>314 ? false : true)));
}

inline bool vfj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<1168 ? xql(x,m,a,s) : fb(x,m,a,s));
}

inline bool dnt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<3071 ? true : true);
}

inline bool tjx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>1534 ? true : true);
}

inline bool dtm(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<714 ? zhx(x,m,a,s) : (m<3352 ? zm(x,m,a,s) : slv(x,m,a,s)));
}

inline bool cq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>3174 ? true : true);
}

inline bool psn(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1284 ? cjj(x,m,a,s) : (x>1844 ? xn(x,m,a,s) : jqj(x,m,a,s)));
}

inline bool xh(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1317 ? true : (x>2843 ? true : false));
}

inline bool sgt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>3564 ? true : true);
}

inline bool lgz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<2895 ? false : true);
}

inline bool fzq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>2802 ? kf(x,m,a,s) : (a>605 ? false : false));
}

inline bool gps(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<822 ? true : (a>839 ? true : (x<2994 ? true : true)));
}

inline bool mbq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<2602 ? vtd(x,m,a,s) : false);
}

inline bool cts(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<2887 ? false : false);
}

inline bool bd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3096 ? false : false);
}

inline bool gk(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<949 ? false : (a>1097 ? true : (x<2044 ? false : false)));
}

inline bool ds(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>927 ? true : (m>1055 ? false : false));
}

inline bool mps(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<1131 ? false : true);
}

inline bool slv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>1497 ? vgh(x,m,a,s) : (a<983 ? hgt(x,m,a,s) : (a<1095 ? tmr(x,m,a,s) : bsj(x,m,a,s))));
}

inline bool gdn(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>1376 ? false : true);
}

inline bool jj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3028 ? true : (x<1518 ? false : true));
}

inline bool bg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3463 ? false : true);
}

inline bool fq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<873 ? true : false);
}

inline bool blg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<476 ? true : (x<743 ? false : true));
}

inline bool gqs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>1049 ? true : (a>1029 ? false : (a<1023 ? false : true)));
}

inline bool szr(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>825 ? false : (a<642 ? true : (a>675 ? true : false)));
}

inline bool jdq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>691 ? false : (m<2018 ? false : (x>1015 ? true : true)));
}

inline bool jk(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>415 ? true : true);
}

inline bool xvx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3391 ? false : (a>1694 ? true : true));
}

inline bool pb(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>2785 ? false : false);
}

inline bool gf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<1294 ? true : (a<1958 ? false : false));
}

inline bool kgr(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>2635 ? hrg(x,m,a,s) : (a<1461 ? zq(x,m,a,s) : false));
}

inline bool cs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>2439 ? true : (a<219 ? true : true));
}

inline bool qnb(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<1281 ? tjx(x,m,a,s) : (a<1711 ? true : ztp(x,m,a,s)));
}

inline bool zvk(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<1182 ? false : false);
}

inline bool snd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<680 ? true : (a<723 ? false : true));
}

inline bool tnt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<876 ? false : (s<3391 ? true : (x<1365 ? false : true)));
}

inline bool ddt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3788 ? true : (s>2800 ? false : false));
}

inline bool zx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>3399 ? false : (x>984 ? false : pfj(x,m,a,s)));
}

inline bool tp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>731 ? true : true);
}

inline bool ztl(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>1938 ? true : (m<676 ? true : (x<997 ? false : false)));
}

inline bool mpb(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>2483 ? kg(x,m,a,s) : zhk(x,m,a,s));
}

inline bool jb(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>1027 ? false : true);
}

inline bool hv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<1034 ? false : nr(x,m,a,s));
}

inline bool slj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<1035 ? true : (s<1462 ? vx(x,m,a,s) : (s<1617 ? mx(x,m,a,s) : true)));
}

inline bool nxp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>2789 ? zvk(x,m,a,s) : (s>1209 ? kd(x,m,a,s) : cs(x,m,a,s)));
}

inline bool mds(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>353 ? false : false);
}

inline bool hl(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<1920 ? dlb(x,m,a,s) : xlj(x,m,a,s));
}

inline bool rcj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1686 ? false : (x>1892 ? bpc(x,m,a,s) : (s<1510 ? false : hsl(x,m,a,s))));
}

inline bool sg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>2708 ? rm(x,m,a,s) : false);
}

inline bool kkf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<1967 ? false : (m<1976 ? gxd(x,m,a,s) : (a>763 ? mfq(x,m,a,s) : true)));
}

inline bool vp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<2517 ? nd(x,m,a,s) : (x>1859 ? srv(x,m,a,s) : (s>810 ? pg(x,m,a,s) : szl(x,m,a,s))));
}

inline bool zxf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<1614 ? ftg(x,m,a,s) : (m>1724 ? true : false));
}

inline bool vqs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>736 ? true : (m<362 ? false : true));
}

inline bool tn(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<2744 ? false : (m<3203 ? false : (m>3300 ? true : false)));
}

inline bool hsd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<2643 ? false : true);
}

inline bool tss(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>922 ? false : (a<1019 ? true : (a>1154 ? true : false)));
}

inline bool tlr(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<3231 ? false : (x>2029 ? true : true));
}

inline bool qqg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<2873 ? false : (x>3359 ? false : (s>3047 ? true : fq(x,m,a,s))));
}

inline bool tbh(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>1566 ? true : (x>1286 ? false : (x>1138 ? false : true)));
}

inline bool dzj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3298 ? true : true);
}

inline bool sbx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3341 ? false : (a<991 ? true : true));
}

inline bool zs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1423 ? true : (a<1498 ? nb(x,m,a,s) : true));
}

inline bool lgq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1200 ? dtm(x,m,a,s) : (x<1546 ? hp(x,m,a,s) : brm(x,m,a,s)));
}

inline bool ql(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<880 ? kpc(x,m,a,s) : lmm(x,m,a,s));
}

inline bool zn(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<1750 ? true : (x<901 ? false : (m<3644 ? true : true)));
}

inline bool mjs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>2426 ? fxr(x,m,a,s) : (s<2233 ? true : (s>2497 ? true : false)));
}

inline bool tbs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<3370 ? true : (a>2833 ? false : (m>1245 ? true : false)));
}

inline bool mp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>3625 ? true : (x<819 ? true : false));
}

inline bool hjp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<429 ? true : (x>774 ? true : false));
}

inline bool dzv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3698 ? false : (a<837 ? ztm(x,m,a,s) : ltt(x,m,a,s)));
}

inline bool bqt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<3520 ? true : false);
}

inline bool bn(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3802 ? false : (x<278 ? true : (x<324 ? true : false)));
}

inline bool mkq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>321 ? false : (s>686 ? false : (s<253 ? true : false)));
}

inline bool tz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>883 ? false : (m>3465 ? true : false));
}

inline bool rm(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<683 ? false : (a<1520 ? false : true));
}

inline bool gcp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>3097 ? true : pb(x,m,a,s));
}

inline bool kp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<632 ? bt(x,m,a,s) : (a>666 ? qmk(x,m,a,s) : (a<651 ? xd(x,m,a,s) : lzh(x,m,a,s))));
}

inline bool jg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<2959 ? true : true);
}

inline bool mg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>1316 ? xdl(x,m,a,s) : xvx(x,m,a,s));
}

inline bool qp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>3467 ? false : true);
}

inline bool fp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<1546 ? false : true);
}

inline bool sp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>3712 ? true : (s<1594 ? false : false));
}

inline bool vjs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>2044 ? true : true);
}

inline bool zc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>2110 ? true : (s>243 ? true : (a>2028 ? true : true)));
}

inline bool nk(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<1119 ? true : (m>1895 ? true : (m>1627 ? true : false)));
}

inline bool vk(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1458 ? zj(x,m,a,s) : (s>1515 ? bf(x,m,a,s) : rb(x,m,a,s)));
}

inline bool fz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<513 ? false : (a<685 ? pvs(x,m,a,s) : (m>702 ? sst(x,m,a,s) : zrt(x,m,a,s))));
}

inline bool qc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>626 ? false : (a>446 ? false : false));
}

inline bool pvz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<924 ? true : (m>1466 ? true : false));
}

inline bool xql(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>3205 ? nt(x,m,a,s) : dnt(x,m,a,s));
}

inline bool hk(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>901 ? nvv(x,m,a,s) : sx(x,m,a,s));
}

inline bool shp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>552 ? lrf(x,m,a,s) : (x<2379 ? cd(x,m,a,s) : fhn(x,m,a,s)));
}

inline bool gqb(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<2096 ? rx(x,m,a,s) : zxh(x,m,a,s));
}

inline bool hgv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<2779 ? false : (s>1337 ? true : false));
}

inline bool kz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<3763 ? sp(x,m,a,s) : lp(x,m,a,s));
}

inline bool jmc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>932 ? psn(x,m,a,s) : (x<1954 ? cgx(x,m,a,s) : (a>579 ? sgf(x,m,a,s) : vfj(x,m,a,s))));
}

inline bool ptr(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3398 ? cks(x,m,a,s) : (m<3105 ? hr(x,m,a,s) : dh(x,m,a,s)));
}

inline bool vq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>1722 ? true : (s<3208 ? false : (s>3621 ? true : false)));
}

inline bool jm(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<1649 ? false : (a>1786 ? true : (x<1723 ? false : false)));
}

inline bool sx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>1431 ? false : (x<659 ? false : false));
}

inline bool rjz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>2733 ? false : (s<3280 ? false : false));
}

inline bool ns(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3790 ? true : true);
}

inline bool vz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>2278 ? kgr(x,m,a,s) : hvp(x,m,a,s));
}

inline bool xnx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<1150 ? false : false);
}

inline bool xx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<173 ? kk(x,m,a,s) : (a<325 ? dsn(x,m,a,s) : false));
}

inline bool mj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3015 ? true : false);
}

inline bool zvd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<2061 ? tbs(x,m,a,s) : (m<1477 ? sl(x,m,a,s) : kl(x,m,a,s)));
}

inline bool jx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>145 ? bn(x,m,a,s) : xnq(x,m,a,s));
}

inline bool nc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>683 ? true : (x<2504 ? false : (a>997 ? false : true)));
}

inline bool nnq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>2255 ? qtq(x,m,a,s) : mdj(x,m,a,s));
}

inline bool kdd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1665 ? dd(x,m,a,s) : (s>2337 ? false : (m<3014 ? true : true)));
}

inline bool hqk(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<3409 ? true : (s>3722 ? true : false));
}

inline bool jhf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<2557 ? true : (a<730 ? false : true));
}

inline bool vdg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<3930 ? ghm(x,m,a,s) : (m<3341 ? false : (a<949 ? dmx(x,m,a,s) : true)));
}

inline bool vg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1470 ? true : (x>2764 ? pdt(x,m,a,s) : prc(x,m,a,s)));
}

inline bool lmm(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<1595 ? rk(x,m,a,s) : qpv(x,m,a,s));
}

inline bool kf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>3482 ? true : (m<2709 ? false : false));
}

inline bool gml(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>3626 ? kz(x,m,a,s) : (m<3322 ? fvs(x,m,a,s) : jmr(x,m,a,s)));
}

inline bool hsj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<3421 ? false : (x<3726 ? false : (s<1156 ? true : false)));
}

inline bool qx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1612 ? vz(x,m,a,s) : nnq(x,m,a,s));
}

inline bool mjb(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>1017 ? true : (a>433 ? mqz(x,m,a,s) : pf(x,m,a,s)));
}

inline bool dpv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3697 ? true : (s<872 ? true : (m>3573 ? false : fkv(x,m,a,s))));
}

inline bool dmx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3718 ? true : (x>3961 ? true : (a>916 ? true : true)));
}

inline bool fc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>722 ? true : (m<376 ? false : (m<538 ? false : true)));
}

inline bool cxd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<1218 ? snb(x,m,a,s) : (a>1837 ? true : (m>2273 ? true : true)));
}

inline bool jv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>3082 ? kkd(x,m,a,s) : (s<2674 ? hjp(x,m,a,s) : xvb(x,m,a,s)));
}

inline bool tnv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>800 ? false : (s<1826 ? false : (a<692 ? true : true)));
}

inline bool kl(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<2444 ? false : (s>2526 ? false : false));
}

inline bool zf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>334 ? false : true);
}

inline bool kt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>2518 ? rph(x,m,a,s) : vg(x,m,a,s));
}

inline bool dhk(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1618 ? false : false);
}

inline bool bhl(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3024 ? false : false);
}

inline bool ppg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>3162 ? false : true);
}

inline bool nvv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<2532 ? true : (m>2216 ? true : true));
}

inline bool xvb(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>458 ? fc(x,m,a,s) : vhq(x,m,a,s));
}

inline bool flg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>3250 ? tmx(x,m,a,s) : (x<3592 ? bdh(x,m,a,s) : mxc(x,m,a,s)));
}

inline bool thh(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<1567 ? true : false);
}

inline bool xdj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3434 ? zxn(x,m,a,s) : (x<356 ? hpx(x,m,a,s) : rrm(x,m,a,s)));
}

inline bool zr(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>2998 ? smv(x,m,a,s) : (x<2379 ? gqb(x,m,a,s) : (s<2997 ? ml(x,m,a,s) : tdr(x,m,a,s))));
}

inline bool fjb(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<961 ? false : true);
}

inline bool pz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<1962 ? true : false);
}

inline bool nkj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>2911 ? true : (m<3767 ? false : (x>2553 ? false : true)));
}

inline bool bf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<2727 ? tq(x,m,a,s) : (m<3716 ? false : (x<3522 ? btg(x,m,a,s) : sb(x,m,a,s))));
}

inline bool hpx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<1574 ? zz(x,m,a,s) : (a>1130 ? mn(x,m,a,s) : jx(x,m,a,s)));
}

inline bool skq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3265 ? kdr(x,m,a,s) : (a<3095 ? dfl(x,m,a,s) : lgh(x,m,a,s)));
}

inline bool mdj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>2009 ? false : true);
}

inline bool hfl(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<2221 ? hv(x,m,a,s) : (a>525 ? qqg(x,m,a,s) : nx(x,m,a,s)));
}

inline bool qcg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<743 ? px(x,m,a,s) : (s>2697 ? vd(x,m,a,s) : false));
}

inline bool brm(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<1786 ? vbq(x,m,a,s) : (m>3294 ? fzt(x,m,a,s) : (x>1840 ? cr(x,m,a,s) : hgf(x,m,a,s))));
}

inline bool fhx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<833 ? true : (s<2988 ? jq(x,m,a,s) : (m<453 ? true : true)));
}

inline bool tqd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>3713 ? false : (a>3304 ? true : true));
}

inline bool qg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<3734 ? true : (s<3427 ? true : false));
}

inline bool fxs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1567 ? false : (m>3691 ? true : (a<1626 ? true : false)));
}

inline bool js(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>2419 ? jmc(x,m,a,s) : bld(x,m,a,s));
}

inline bool mv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>1609 ? false : (s>1439 ? false : (a<1646 ? true : cx(x,m,a,s))));
}

inline bool gxd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<556 ? true : (m<1972 ? true : false));
}

inline bool bfx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>2202 ? false : true);
}

inline bool xm(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3293 ? false : (m<3313 ? false : (s>1326 ? true : true)));
}

inline bool qcc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>1359 ? false : (m>3131 ? true : true));
}

inline bool kqh(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>1651 ? dqd(x,m,a,s) : (m<1113 ? vqs(x,m,a,s) : (m>1461 ? sqj(x,m,a,s) : hj(x,m,a,s))));
}

inline bool st(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<3852 ? false : true);
}

inline bool bt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<3362 ? false : (x>2509 ? false : (m<415 ? true : true)));
}

inline bool kbc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<670 ? mkq(x,m,a,s) : true);
}

inline bool mnc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>759 ? false : (a>697 ? true : (a<654 ? false : true)));
}

inline bool mqz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<2072 ? true : (m>3722 ? false : false));
}

inline bool fn(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<1666 ? false : false);
}

inline bool zrt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>590 ? true : (a<749 ? false : (a<766 ? false : false)));
}

inline bool dl(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<2405 ? gt(x,m,a,s) : (m>1832 ? bfx(x,m,a,s) : (a>3717 ? hsj(x,m,a,s) : sh(x,m,a,s))));
}

inline bool xnl(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>524 ? false : (s<2581 ? qlz(x,m,a,s) : rrx(x,m,a,s)));
}

inline bool qpv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<2019 ? cmf(x,m,a,s) : (a<695 ? true : (m<1257 ? false : false)));
}

inline bool dlj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<192 ? false : true);
}

inline bool rg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>848 ? zdx(x,m,a,s) : (a<1237 ? nl(x,m,a,s) : hsd(x,m,a,s)));
}

inline bool lf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<3204 ? lcd(x,m,a,s) : (x<910 ? cfd(x,m,a,s) : (a<3565 ? dr(x,m,a,s) : zl(x,m,a,s))));
}

inline bool nps(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>2943 ? dhk(x,m,a,s) : (x<2837 ? false : true));
}

inline bool pk(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<3133 ? false : (s<3500 ? true : false));
}

inline bool hb(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<2063 ? false : (a<3400 ? false : (m<384 ? false : true)));
}

inline bool tt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>2490 ? vbp(x,m,a,s) : (s<3152 ? cmp(x,m,a,s) : qq(x,m,a,s)));
}

inline bool sh(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<1092 ? false : (a>3463 ? true : (s<1392 ? false : false)));
}

inline bool tpl(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3508 ? gz(x,m,a,s) : (m>2949 ? false : (s>1047 ? fp(x,m,a,s) : true)));
}

inline bool sst(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>832 ? true : true);
}

inline bool qvs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>2274 ? ksm(x,m,a,s) : lf(x,m,a,s));
}

inline bool nq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<3159 ? true : false);
}

inline bool qgf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>2065 ? hbj(x,m,a,s) : (s<2483 ? sd(x,m,a,s) : qkl(x,m,a,s)));
}

inline bool lk(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<1052 ? false : (m>1945 ? false : false));
}

inline bool qv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<3357 ? true : true);
}

inline bool blv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>3046 ? dtj(x,m,a,s) : (s>3114 ? true : false));
}

inline bool lg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>2254 ? qlv(x,m,a,s) : cmr(x,m,a,s));
}

inline bool nh(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>431 ? false : (a>1433 ? true : true));
}

inline bool pps(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>1893 ? true : false);
}

inline bool qk(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<3254 ? jtz(x,m,a,s) : (m>3294 ? nvz(x,m,a,s) : tps(x,m,a,s)));
}

inline bool qlv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>1566 ? rpb(x,m,a,s) : (s>575 ? false : (x<1750 ? jzd(x,m,a,s) : false)));
}

inline bool qq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>375 ? zg(x,m,a,s) : (a<867 ? false : (m<250 ? lx(x,m,a,s) : false)));
}

inline bool rx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<2021 ? true : (x<2053 ? false : (m<3343 ? true : true)));
}

inline bool jmr(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3710 ? xnx(x,m,a,s) : (s<1515 ? tlr(x,m,a,s) : (x<1654 ? gnn(x,m,a,s) : true)));
}

inline bool lcd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<793 ? nk(x,m,a,s) : (a<2779 ? false : true));
}

inline bool sl(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<3170 ? false : (x<3352 ? true : (s>2348 ? false : false)));
}

inline bool nl(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>394 ? true : false);
}

inline bool rt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>1895 ? ztl(x,m,a,s) : tnt(x,m,a,s));
}

inline bool mlt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>1178 ? true : (x>2340 ? true : (s>610 ? true : true)));
}

inline bool srt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>3764 ? fbh(x,m,a,s) : (m>3302 ? true : true));
}

inline bool pg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<1473 ? false : (m>2572 ? true : qc(x,m,a,s)));
}

inline bool btc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>2364 ? false : (m<2104 ? rqj(x,m,a,s) : (a<1891 ? hmg(x,m,a,s) : mr(x,m,a,s))));
}

inline bool md(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<2896 ? rh(x,m,a,s) : (m<2539 ? true : hn(x,m,a,s)));
}

inline bool zxn(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<618 ? ctj(x,m,a,s) : (s>1748 ? bgt(x,m,a,s) : (a<1183 ? hqv(x,m,a,s) : bts(x,m,a,s))));
}

inline bool qbd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>1300 ? false : (a>1195 ? false : true));
}

inline bool gm(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<888 ? fhx(x,m,a,s) : (m<490 ? flg(x,m,a,s) : ckn(x,m,a,s)));
}

inline bool sb(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<3829 ? true : (x<3943 ? true : (x>3979 ? true : false)));
}

inline bool fpv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>2671 ? true : (x>2630 ? true : (a>2602 ? false : lk(x,m,a,s))));
}

inline bool cmr(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>1618 ? ndl(x,m,a,s) : (x>1648 ? nvs(x,m,a,s) : rqg(x,m,a,s)));
}

inline bool fr(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>2491 ? false : hb(x,m,a,s));
}

inline bool zll(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<2443 ? xvp(x,m,a,s) : zsg(x,m,a,s));
}

inline bool xg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>1229 ? zn(x,m,a,s) : (x<905 ? tnv(x,m,a,s) : db(x,m,a,s)));
}

inline bool llt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<1846 ? false : true);
}

inline bool mjq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<1653 ? xqn(x,m,a,s) : fzq(x,m,a,s));
}

inline bool vj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<2815 ? false : false);
}

inline bool kfh(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<3145 ? true : (s>3678 ? false : true));
}

inline bool ckn(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>910 ? true : (x>3622 ? false : (a<902 ? dx(x,m,a,s) : pcn(x,m,a,s))));
}

inline bool zcf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>1918 ? false : (x<546 ? true : (a<3666 ? false : true)));
}

inline bool ms(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<585 ? false : (s<953 ? ghg(x,m,a,s) : (x>1498 ? fpr(x,m,a,s) : true)));
}

inline bool nbz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<400 ? false : true);
}

inline bool svg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>2523 ? kx(x,m,a,s) : (s<1755 ? bm(x,m,a,s) : qvs(x,m,a,s)));
}

inline bool dfl(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3731 ? false : true);
}

inline bool qs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3253 ? false : (a>1665 ? false : true));
}

inline bool hg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<510 ? true : (s<2024 ? false : (m<479 ? false : true)));
}

inline bool qtg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>1184 ? false : (s<2253 ? false : (m>704 ? false : false)));
}

inline bool psf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1654 ? true : false);
}

inline bool ck(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>804 ? false : (s<2886 ? mds(x,m,a,s) : bd(x,m,a,s)));
}

inline bool jz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>1351 ? true : (s<637 ? true : (m>3673 ? false : true)));
}

inline bool pdt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1696 ? false : true);
}

inline bool dsn(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<3241 ? false : (m>1921 ? true : false));
}

inline bool cr(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<3051 ? false : ntj(x,m,a,s));
}

inline bool rqg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<2046 ? true : (x<1469 ? false : (x>1558 ? false : false)));
}

inline bool ggf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<802 ? true : (s<1148 ? false : (x<3200 ? false : true)));
}

inline bool dh(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>758 ? gps(x,m,a,s) : jb(x,m,a,s));
}

inline bool cjd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>1079 ? false : (s<695 ? true : (s<830 ? true : false)));
}

inline bool pdz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>1874 ? false : true);
}

inline bool jtg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3797 ? true : false);
}

inline bool jsf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<2622 ? rzd(x,m,a,s) : (x<1372 ? fx(x,m,a,s) : (x>2301 ? kpl(x,m,a,s) : nm(x,m,a,s))));
}

inline bool zm(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<963 ? false : (s>3171 ? jj(x,m,a,s) : (m>3023 ? tn(x,m,a,s) : lb(x,m,a,s))));
}

inline bool ctj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<2660 ? cg(x,m,a,s) : hd(x,m,a,s));
}

inline bool dlb(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<1015 ? xdj(x,m,a,s) : (s>1984 ? lgq(x,m,a,s) : lc(x,m,a,s)));
}

inline bool vgh(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<978 ? false : true);
}

inline bool sd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<1949 ? pz(x,m,a,s) : (s<926 ? jjr(x,m,a,s) : (m>1989 ? ht(x,m,a,s) : kkf(x,m,a,s))));
}

inline bool ccd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>1353 ? true : (a>1394 ? true : true));
}

inline bool fxr(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>2560 ? true : (m>1609 ? false : true));
}

inline bool xt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>300 ? false : (a<166 ? true : (x<2401 ? true : true)));
}

inline bool rd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>441 ? true : (a>1690 ? false : (m<260 ? false : false)));
}

inline bool ccs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<838 ? true : false);
}

inline bool ztm(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>542 ? true : (m<3852 ? true : true));
}

inline bool pcn(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>3269 ? true : (a<907 ? false : true));
}

inline bool hp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>2757 ? mg(x,m,a,s) : qrq(x,m,a,s));
}

inline bool ldc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>3475 ? true : (s<3762 ? dz(x,m,a,s) : dn(x,m,a,s)));
}

inline bool lzh(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<3256 ? false : (a<658 ? false : false));
}

inline bool gnn(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3490 ? true : (s>1926 ? false : (a<3250 ? true : false)));
}

inline bool scp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>764 ? false : (a>1806 ? false : false));
}

inline bool vtd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>785 ? false : (m<1742 ? true : true));
}

inline bool jqj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>1728 ? rt(x,m,a,s) : (a<1550 ? zxs(x,m,a,s) : mps(x,m,a,s)));
}

inline bool hsl(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>1037 ? false : (x>580 ? true : true));
}

inline bool gxg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>1274 ? false : (s<3369 ? false : (m<937 ? false : false)));
}

inline bool rh(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<2411 ? true : (x<2226 ? false : (x<2849 ? false : false)));
}

inline bool hrd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<3098 ? tp(x,m,a,s) : jhf(x,m,a,s));
}

inline bool nvz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3703 ? false : (s<2096 ? hs(x,m,a,s) : kfx(x,m,a,s)));
}

inline bool kx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<3022 ? tqs(x,m,a,s) : gml(x,m,a,s));
}

inline bool xv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>1180 ? false : true);
}

inline bool tmr(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>2918 ? false : false);
}

inline bool lnc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>3019 ? true : (m>3500 ? false : (a>3032 ? nq(x,m,a,s) : false)));
}

inline bool bpc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<1680 ? false : (x<3257 ? true : (a<1791 ? true : false)));
}

inline bool fkv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>828 ? true : (s<1349 ? true : (m<3525 ? false : false)));
}

inline bool dqd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<1784 ? jf(x,m,a,s) : (s<3044 ? zf(x,m,a,s) : pvz(x,m,a,s)));
}

inline bool vkn(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3521 ? true : (a>420 ? true : (s<2784 ? false : false)));
}

inline bool kpl(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<3416 ? lnc(x,m,a,s) : lh(x,m,a,s));
}

inline bool bts(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>848 ? false : (x<712 ? cjd(x,m,a,s) : (a<1645 ? false : scp(x,m,a,s))));
}

inline bool psz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>1926 ? gf(x,m,a,s) : (x>3134 ? gxg(x,m,a,s) : (s<3215 ? pps(x,m,a,s) : true)));
}

inline bool qtq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<2450 ? true : (s<3447 ? shm(x,m,a,s) : (a<1787 ? ppg(x,m,a,s) : str(x,m,a,s))));
}

inline bool dmp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<447 ? true : false);
}

inline bool lgh(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3647 ? false : (a<3490 ? false : (a<3775 ? true : true)));
}

inline bool xzl(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>1524 ? false : (m>1326 ? true : (s<2750 ? false : false)));
}

inline bool srv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<2556 ? false : (s<843 ? vkm(x,m,a,s) : (s<1416 ? ggf(x,m,a,s) : true)));
}

inline bool mr(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<2264 ? false : true);
}

inline bool th(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<835 ? false : (m>3729 ? false : (x>2872 ? false : false)));
}

inline bool jzd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>258 ? false : (m>2563 ? true : true));
}

inline bool sk(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1710 ? fxs(x,m,a,s) : ns(x,m,a,s));
}

inline bool cjj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1060 ? sv(x,m,a,s) : (a>1170 ? rg(x,m,a,s) : (x>2037 ? mt(x,m,a,s) : zx(x,m,a,s))));
}

inline bool jf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>928 ? false : true);
}

inline bool mf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>973 ? hvz(x,m,a,s) : false);
}

inline bool vd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>3203 ? true : (s<2797 ? true : false));
}

inline bool hrg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1371 ? true : (a>1483 ? true : false));
}

inline bool nt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>670 ? qg(x,m,a,s) : (a<362 ? true : true));
}

inline bool qmk(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>675 ? true : (s>3143 ? true : (a<671 ? false : false)));
}

inline bool rzd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<2988 ? zdk(x,m,a,s) : nn(x,m,a,s));
}

inline bool kd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<309 ? false : (s<1769 ? false : false));
}

inline bool xqn(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<2720 ? gvf(x,m,a,s) : false);
}

inline bool lrf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>2123 ? true : false);
}

inline bool kgs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<3178 ? md(x,m,a,s) : ldc(x,m,a,s));
}

inline bool zqf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>2658 ? false : (x>2351 ? false : (m<3669 ? false : true)));
}

inline bool lq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<3090 ? prq(x,m,a,s) : (x>3401 ? tl(x,m,a,s) : qk(x,m,a,s)));
}

inline bool zh(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>985 ? sr(x,m,a,s) : pls(x,m,a,s));
}

inline bool hvz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>2459 ? true : false);
}

inline bool tdr(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>2697 ? true : (a<745 ? true : (a>790 ? zt(x,m,a,s) : lvb(x,m,a,s))));
}

inline bool hqd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>113 ? false : false);
}

inline bool qz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>2674 ? false : (x<2580 ? true : false));
}

inline bool cmd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>3700 ? false : false);
}

inline bool gr(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3628 ? true : false);
}

inline bool kkd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<3400 ? false : (m<714 ? jk(x,m,a,s) : dmp(x,m,a,s)));
}

inline bool qfs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>3836 ? false : (m<1400 ? true : (x<3759 ? false : false)));
}

inline bool shm(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>1800 ? true : (a<1730 ? false : (a>1770 ? true : false)));
}

inline bool zt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3276 ? false : (m<3120 ? false : (a>831 ? false : false)));
}

inline bool ghg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1820 ? false : true);
}

inline bool tbx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<3172 ? true : (a<196 ? false : false));
}

inline bool zdk(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<1472 ? lsb(x,m,a,s) : true);
}

inline bool kr(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>1320 ? sk(x,m,a,s) : dpv(x,m,a,s));
}

inline bool pfj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>3032 ? false : false);
}

inline bool cf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>1919 ? lt(x,m,a,s) : fd(x,m,a,s));
}

inline bool bbc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>1594 ? false : (m<3225 ? gdn(x,m,a,s) : (a>1201 ? true : true)));
}

inline bool lsb(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<2500 ? false : (a<2407 ? false : (a>2649 ? false : true)));
}

inline bool sm(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3048 ? true : (a>1017 ? false : true));
}

inline bool sjv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>429 ? hzr(x,m,a,s) : (a>402 ? vkn(x,m,a,s) : false));
}

inline bool mh(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>2662 ? true : true);
}

inline bool kgj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>485 ? true : (s>920 ? nbz(x,m,a,s) : true));
}

inline bool sxh(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>1060 ? false : (s>2864 ? false : false));
}

inline bool jq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<596 ? true : false);
}

inline bool rpb(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>1574 ? true : true);
}

inline bool grp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>3284 ? dl(x,m,a,s) : (m>1831 ? hk(x,m,a,s) : (m<1617 ? rlp(x,m,a,s) : mbq(x,m,a,s))));
}

inline bool dxh(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3650 ? nfh(x,m,a,s) : (m>3848 ? nxp(x,m,a,s) : (m>3717 ? nkj(x,m,a,s) : ntv(x,m,a,s))));
}

inline bool jtz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3480 ? jz(x,m,a,s) : (s<2415 ? false : false));
}

inline bool hs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3505 ? true : (s>1154 ? false : (a<1005 ? true : true)));
}

inline bool cmf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<1821 ? false : (a<458 ? false : (s<1920 ? false : false)));
}

inline bool zv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>2271 ? false : true);
}

inline bool fd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3519 ? false : (x>1581 ? false : (a>2722 ? false : true)));
}

inline bool dbs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>3121 ? false : (x>3421 ? true : (m<1352 ? false : true)));
}

inline bool xsc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<3091 ? false : (x>792 ? true : (s<3555 ? true : false)));
}

inline bool rht(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>607 ? false : (m>2014 ? false : (a>503 ? true : true)));
}

inline bool lz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>3564 ? xm(x,m,a,s) : (x<3325 ? true : skb(x,m,a,s)));
}

inline bool zdx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>3219 ? true : (x<2480 ? false : (x<3484 ? true : false)));
}

inline bool kv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>1016 ? ds(x,m,a,s) : false);
}

inline bool snb(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>574 ? false : (a>1880 ? true : (x>923 ? false : false)));
}

inline bool mn(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>3187 ? false : (s>2164 ? bs(x,m,a,s) : (m<3739 ? dlj(x,m,a,s) : xhl(x,m,a,s))));
}

inline bool mxc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<242 ? true : (x<3746 ? false : true));
}

inline bool px(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>644 ? true : (s<2728 ? false : (x>3287 ? false : false)));
}

inline bool hbj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<2211 ? shp(x,m,a,s) : (m>2308 ? nqq(x,m,a,s) : xnl(x,m,a,s)));
}

inline bool bsj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>3147 ? true : false);
}

inline bool qd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>3693 ? false : (a<3660 ? qp(x,m,a,s) : (s>3612 ? true : vjs(x,m,a,s))));
}

inline bool zhk(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<2632 ? mlt(x,m,a,s) : false);
}

inline bool ksm(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>2854 ? zvd(x,m,a,s) : (a>3133 ? tv(x,m,a,s) : (x>2578 ? fpv(x,m,a,s) : mjs(x,m,a,s))));
}

inline bool rnp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<1831 ? true : true);
}

inline bool vdt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<769 ? true : (a<3443 ? cq(x,m,a,s) : (s>619 ? false : cmd(x,m,a,s))));
}

inline bool xnq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3721 ? true : false);
}

inline bool qcs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>3317 ? false : (a<1598 ? true : (s<2533 ? true : true)));
}

inline bool vdf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<883 ? true : (m>3275 ? false : tbh(x,m,a,s)));
}

inline bool xvp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<2548 ? false : (x>1951 ? true : (s>1071 ? true : true)));
}

inline bool xjp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<76 ? true : fsg(x,m,a,s));
}

inline bool nm(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>2996 ? cf(x,m,a,s) : skq(x,m,a,s));
}

inline bool rkn(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<3726 ? true : true);
}

inline bool tgd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>2757 ? false : xt(x,m,a,s));
}

inline bool str(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>3224 ? true : (m>2530 ? false : true));
}

inline bool ht(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<2033 ? fn(x,m,a,s) : true);
}

inline bool pf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<659 ? false : true);
}

inline bool kfx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>3352 ? true : (s>3192 ? false : (a<1007 ? false : true)));
}

inline bool fb(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<3282 ? mzr(x,m,a,s) : (a<202 ? xjp(x,m,a,s) : (x>3702 ? mq(x,m,a,s) : fbl(x,m,a,s))));
}

inline bool hmm(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<3203 ? tgd(x,m,a,s) : (m<3096 ? grd(x,m,a,s) : (m>3217 ? lz(x,m,a,s) : np(x,m,a,s))));
}

inline bool hr(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>2968 ? false : false);
}

inline bool fvs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>1734 ? true : (s>1359 ? vr(x,m,a,s) : (a<3421 ? bkc(x,m,a,s) : true)));
}

inline bool mx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<1237 ? false : (m<1330 ? true : (m<1387 ? true : true)));
}

inline bool dtj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3403 ? false : (m<3689 ? false : (a<346 ? true : true)));
}

inline bool cqs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<986 ? false : (a>1025 ? fs(x,m,a,s) : true));
}

inline bool bv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>2301 ? hqk(x,m,a,s) : true);
}

inline bool nfp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>2587 ? false : true);
}

inline bool mlc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1713 ? false : true);
}

inline bool lmr(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<556 ? true : (s>441 ? false : (a<924 ? false : false)));
}

inline bool xf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3026 ? true : (a>912 ? false : (m>3139 ? true : false)));
}

inline bool vbq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3572 ? jtg(x,m,a,s) : (a>1680 ? jm(x,m,a,s) : (x>1650 ? pd(x,m,a,s) : pqh(x,m,a,s))));
}

inline bool zmg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<2959 ? false : (m<1833 ? true : true));
}

inline bool cx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1868 ? true : (a>1928 ? true : (m<412 ? false : true)));
}

inline bool vfz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<720 ? false : (m>3667 ? false : (m<3658 ? true : true)));
}

inline bool gz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<1382 ? true : true);
}

inline bool qlz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<2261 ? true : (m>2278 ? false : (x<1617 ? false : false)));
}

inline bool lh(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<2877 ? bfj(x,m,a,s) : (m<3524 ? false : (s<3202 ? tqd(x,m,a,s) : true)));
}

inline bool xlj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>1080 ? gs(x,m,a,s) : (a<466 ? bjt(x,m,a,s) : (a>868 ? lq(x,m,a,s) : vbl(x,m,a,s))));
}

inline bool gbh(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>602 ? true : false);
}

inline bool lvb(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3613 ? false : (a>766 ? false : true));
}

inline bool hj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>1236 ? pk(x,m,a,s) : (m>1173 ? true : true));
}

inline bool nd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<571 ? true : (x>1952 ? true : tss(x,m,a,s)));
}

inline bool qrq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>2394 ? false : false);
}

inline bool ltm(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>3281 ? qd(x,m,a,s) : (m>2147 ? dbd(x,m,a,s) : pc(x,m,a,s)));
}

inline bool pcv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<2504 ? rmd(x,m,a,s) : false);
}

inline bool vx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>1249 ? false : (m<1122 ? true : true));
}

inline bool kk(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>102 ? true : false);
}

inline bool hrm(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<3482 ? false : false);
}

inline bool rb(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3705 ? mlc(x,m,a,s) : true);
}

inline bool ct(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3575 ? false : (s<923 ? true : (m>3498 ? false : false)));
}

inline bool bbl(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<2954 ? false : (x>1234 ? true : (x<1131 ? false : false)));
}

inline bool hzr(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>444 ? true : false);
}

inline bool smv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3555 ? true : false);
}

inline bool hn(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>3443 ? false : (s<3762 ? true : false));
}

inline bool bld(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1301 ? ql(x,m,a,s) : zh(x,m,a,s));
}

inline bool mzr(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>3296 ? true : true);
}

inline bool pq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>714 ? true : (a>2725 ? true : (s>3201 ? true : false)));
}

inline bool vc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<1661 ? true : (s<2236 ? false : (m>1963 ? true : false)));
}

inline bool fl(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<3463 ? false : false);
}

inline bool pt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<3499 ? jsf(x,m,a,s) : fj(x,m,a,s));
}

inline bool xs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>1018 ? gqs(x,m,a,s) : (x<2524 ? sbx(x,m,a,s) : (m>3346 ? th(x,m,a,s) : false)));
}

inline bool rp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>3756 ? false : false);
}

inline bool rs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<1607 ? false : (x<1267 ? true : (m>1707 ? false : true)));
}

inline bool mmz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<746 ? true : (m<1213 ? false : (m<1326 ? false : true)));
}

inline bool fhn(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<3152 ? true : (s<2125 ? true : (x<3527 ? false : true)));
}

inline bool dx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>893 ? true : (s>3322 ? true : false));
}

inline bool np(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<206 ? false : ccs(x,m,a,s));
}

inline bool xjt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<2267 ? true : (a>2500 ? false : false));
}

inline bool bz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<2656 ? svg(x,m,a,s) : pt(x,m,a,s));
}

inline bool bjt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>2419 ? gq(x,m,a,s) : (m<3336 ? hmm(x,m,a,s) : dxh(x,m,a,s)));
}

inline bool pdn(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>3155 ? mnc(x,m,a,s) : false);
}

inline bool nqq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<653 ? rnp(x,m,a,s) : false);
}

inline bool kjx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<660 ? true : false);
}

inline bool rqj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>1961 ? true : (a>1896 ? false : false));
}

inline bool hq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<240 ? false : (a<1873 ? kfh(x,m,a,s) : (a>1916 ? vj(x,m,a,s) : true)));
}

inline bool btp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>271 ? false : (m<99 ? false : false));
}

inline bool bkc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>1069 ? false : (m>2900 ? true : (m>2668 ? false : true)));
}

inline bool tlf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>1415 ? true : (s<1196 ? bbl(x,m,a,s) : (m<2985 ? false : false)));
}

inline bool rmd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<2173 ? false : (m>3498 ? true : true));
}

inline bool ndl(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<1968 ? false : (a>1791 ? false : false));
}

inline bool ml(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<771 ? snd(x,m,a,s) : false);
}

inline bool tqs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>2458 ? tpl(x,m,a,s) : (s>1393 ? sj(x,m,a,s) : gb(x,m,a,s)));
}

inline bool gvf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>914 ? false : (a<781 ? true : true));
}

inline bool cj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<1186 ? lsd(x,m,a,s) : lg(x,m,a,s));
}

inline bool cmp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>2743 ? jg(x,m,a,s) : (a<860 ? false : (m>312 ? false : true)));
}

inline bool hgf(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3130 ? vq(x,m,a,s) : (m>3236 ? true : qcs(x,m,a,s)));
}

inline bool vhq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<2884 ? true : (a<584 ? false : (x<224 ? true : true)));
}

inline bool dbd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>1077 ? rp(x,m,a,s) : (a>2743 ? false : xjt(x,m,a,s)));
}

inline bool fpr(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<2722 ? true : (a>1735 ? false : (a<1670 ? false : true)));
}

inline bool mfx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>500 ? true : true);
}

inline bool kq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<1491 ? gcp(x,m,a,s) : (s>3146 ? zxf(x,m,a,s) : (s<2894 ? qcg(x,m,a,s) : pdn(x,m,a,s))));
}

inline bool db(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<945 ? false : false);
}

inline bool lp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>2173 ? true : false);
}

inline bool fs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>2533 ? false : (x<2621 ? true : false));
}

inline bool nn(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<1662 ? mp(x,m,a,s) : bb(x,m,a,s));
}

inline bool tq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<2467 ? false : (m<3674 ? true : false));
}

inline bool nb(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>529 ? false : (x<1923 ? false : (s>292 ? true : true)));
}

inline bool ztp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>1837 ? true : false);
}

inline bool lsd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1724 ? jmb(x,m,a,s) : (x<412 ? btc(x,m,a,s) : (s<1937 ? cxd(x,m,a,s) : xsc(x,m,a,s))));
}

inline bool prq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>1741 ? cqs(x,m,a,s) : (a>956 ? xs(x,m,a,s) : (s<904 ? qsz(x,m,a,s) : pcv(x,m,a,s))));
}

inline bool fx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<3176 ? ck(x,m,a,s) : (s<3348 ? dq(x,m,a,s) : crk(x,m,a,s)));
}

inline bool hvp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1406 ? xh(x,m,a,s) : (x<3381 ? true : (m<2017 ? true : true)));
}

inline bool cd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>1361 ? false : true);
}

inline bool rrx(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<3496 ? false : (a<348 ? false : false));
}

inline bool grd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<238 ? hrm(x,m,a,s) : (x>3713 ? st(x,m,a,s) : (m>2992 ? false : thh(x,m,a,s))));
}

inline bool ntj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>3380 ? true : false);
}

inline bool dn(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<2690 ? true : true);
}

inline bool gq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<278 ? vt(x,m,a,s) : (a<382 ? blv(x,m,a,s) : (s>3001 ? cmc(x,m,a,s) : sjv(x,m,a,s))));
}

inline bool gt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<1389 ? false : (s>897 ? true : false));
}

inline bool lb(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<2723 ? false : true);
}

inline bool sj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>1458 ? zk(x,m,a,s) : (s<1859 ? false : bhl(x,m,a,s)));
}

inline bool nvs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<1811 ? false : false);
}

inline bool pvs(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<3335 ? false : (a>628 ? false : false));
}

inline bool ntv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3686 ? gx(x,m,a,s) : (s<1154 ? vfz(x,m,a,s) : zqf(x,m,a,s)));
}

inline bool rph(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>3245 ? qs(x,m,a,s) : (s<3035 ? false : (x>2642 ? lgz(x,m,a,s) : sgt(x,m,a,s))));
}

inline bool ltt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3838 ? true : (m>3769 ? true : true));
}

inline bool pvh(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>2607 ? mjq(x,m,a,s) : (s>2408 ? hfl(x,m,a,s) : vp(x,m,a,s)));
}

inline bool jmb(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<2232 ? true : (m<2528 ? blg(x,m,a,s) : nh(x,m,a,s)));
}

inline bool fbl(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>3421 ? false : (x>3561 ? false : true));
}

inline bool bgt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>1011 ? qcc(x,m,a,s) : (s<2773 ? true : qv(x,m,a,s)));
}

inline bool mk(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<3271 ? csg(x,m,a,s) : (a<971 ? rkn(x,m,a,s) : (m<1911 ? zmg(x,m,a,s) : pqm(x,m,a,s))));
}

inline bool ktm(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1247 ? cbn(x,m,a,s) : dbh(x,m,a,s));
}

inline bool dd(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3002 ? false : (a<1464 ? true : true));
}

inline bool nfh(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3471 ? tbx(x,m,a,s) : (m<3540 ? true : false));
}

inline bool dz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>3220 ? false : (m>2286 ? false : (x>3358 ? false : true)));
}

inline bool bm(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>1464 ? grp(x,m,a,s) : (x>1525 ? cn(x,m,a,s) : cmb(x,m,a,s)));
}

inline bool tv(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x<2655 ? true : (a>3616 ? false : true));
}

inline bool fbh(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<948 ? true : false);
}

inline bool jcc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<2572 ? false : (m>2595 ? true : (s>252 ? false : true)));
}

inline bool ftg(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s<3673 ? true : (x>3286 ? false : (m<1558 ? true : true)));
}

inline bool dq(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>3243 ? rjz(x,m,a,s) : (a<3153 ? pq(x,m,a,s) : bg(x,m,a,s)));
}

inline bool gb(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a>2230 ? false : (s<668 ? zc(x,m,a,s) : gc(x,m,a,s)));
}

inline bool pp(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<1968 ? llt(x,m,a,s) : rht(x,m,a,s));
}

inline bool zj(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3662 ? lv(x,m,a,s) : (m<3521 ? hgv(x,m,a,s) : (s>1468 ? qbd(x,m,a,s) : true)));
}

inline bool xn(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (a<1704 ? sg(x,m,a,s) : (m<680 ? hq(x,m,a,s) : (a<1861 ? lbp(x,m,a,s) : psz(x,m,a,s))));
}

inline bool sc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (x>3263 ? fz(x,m,a,s) : (a>688 ? hrd(x,m,a,s) : kp(x,m,a,s)));
}

inline bool cks(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<3797 ? false : (a>741 ? true : true));
}

inline bool cmc(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m>3299 ? true : (x>2953 ? false : lsf(x,m,a,s)));
}

inline bool xz(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (s>683 ? false : (a>2623 ? true : true));
}

inline bool mt(int32_t x, int32_t m, int32_t a, int32_t s) {
   return (m<826 ? true : false);
}
