#include<stdio.h>

int ap[]={6, 10, 12, 14, 15, 18, 20, 21, 22, 24, 26, 28, 33, 34, 35, 36, 38, 39, 40, 44, 45, 46, 48, 50, 51, 52, 54, 55, 56, 57, 58, 62, 63, 65, 68, 69, 72, 74, 75, 76, 77, 80, 82, 85, 86, 87, 88, 91, 92, 93, 94, 95, 96, 98, 99, 100, 104, 106, 108, 111, 112, 115, 116, 117, 118, 119, 122, 123, 124, 129, 133, 134, 135, 136, 141, 142, 143, 144, 145, 146, 147, 148, 152, 153, 155, 158, 159, 160, 161, 162, 164, 166, 171, 172, 175, 176, 177, 178, 183, 184, 185, 187, 188, 189, 192, 194, 196, 200, 201, 202, 203, 205, 206, 207, 208, 209, 212, 213, 214, 215, 216, 217, 218, 219, 221, 224, 225, 226, 232, 235, 236, 237, 242, 244, 245, 247, 248, 249, 250, 253, 254, 259, 261, 262, 265, 267, 268, 272, 274, 275, 278, 279, 284, 287, 288, 291, 292, 295, 296, 297, 298, 299, 301, 302, 303, 304, 305, 309, 314, 316, 319, 320, 321, 323, 324, 325, 326, 327, 328, 329, 332, 333, 334, 335, 338, 339, 341, 344, 346, 351, 352, 355, 356, 358, 362, 363, 365, 368, 369, 371, 375, 376, 377, 381, 382, 384, 386, 387, 388, 391, 392, 393, 394, 395, 398, 400, 403, 404, 405, 407, 411, 412, 413, 415, 416, 417, 422, 423, 424, 425, 427, 428, 432, 436, 437, 441, 445, 446, 447, 448, 451, 452, 453, 454, 458, 459, 464, 466, 469, 471, 472, 473, 475, 477, 478, 481, 482, 484, 485, 486, 488, 489, 493, 496, 497, 500, 501, 502, 505, 507, 508, 511, 513, 514, 515, 517, 519, 524, 526, 527, 531, 533, 535, 536, 537, 538, 539, 542, 543, 544, 545, 548, 549, 551, 553, 554, 556, 559, 562, 565, 566, 567, 568, 573, 575, 576, 578, 579, 581, 583, 584, 586, 589, 591, 592, 596, 597, 603, 604, 605, 608, 611, 614, 621, 622, 623, 626, 628, 629, 632, 633, 634, 635, 637, 639, 640, 648, 649, 652, 655, 656, 657, 662, 664, 667, 668, 669, 671, 674, 675, 676, 679, 681, 685, 686, 687, 688, 689, 692, 694, 695, 697, 698, 699, 703, 704, 706, 707, 711, 712, 713, 716, 717, 718, 721, 722, 723, 724, 725, 731, 734, 736, 737, 745, 746, 747, 749, 752, 753, 755, 758, 763, 764, 766, 767, 768, 771, 772, 775, 776, 778, 779, 781, 783, 784, 785, 788, 789, 791, 793, 794, 796, 799, 800, 801, 802, 803, 807, 808, 813, 815, 817, 818, 824, 831, 832, 833, 835, 837, 838, 842, 843, 844, 845, 847, 848, 849, 851, 856, 862, 864, 865, 866, 867, 869, 871, 872, 873, 875, 878, 879, 886, 889, 891, 892, 893, 895, 896, 898, 899, 901, 904, 905, 908, 909, 913, 914, 916, 917, 921, 922, 923, 925, 926, 927, 928, 931, 932, 933, 934, 939, 943, 944, 949, 951, 955, 956, 958, 959, 963, 964, 965, 968, 972, 973, 974, 976, 979, 981, 982, 985, 989, 992, 993, 995, 998, 999, 1000, 1003, 1004, 1006, 1007, 1011, 1016, 1017, 1018, 1025, 1027, 1028, 1029, 1037, 1041, 1042, 1043, 1046, 1047, 1048, 1052, 1053, 1055, 1057, 1058, 1059, 1067, 1072, 1073, 1075, 1076, 1077, 1079, 1081, 1082, 1083, 1084, 1088, 1089, 1094, 1096, 1099, 1101, 1107, 1108, 1111, 1112, 1114, 1115, 1119, 1121, 1124, 1125, 1126, 1127, 1132, 1133, 1135, 1136, 1137, 1138, 1139, 1141, 1142, 1143, 1145, 1147, 1149, 1152, 1154, 1156, 1157, 1159, 1161, 1165, 1167, 1168, 1169, 1172, 1174, 1175, 1177, 1179, 1183, 1184, 1186, 1189, 1191, 1192, 1195, 1198, 1199, 1202, 1203, 1205, 1207, 1208, 1211, 1214, 1215, 1216, 1219, 1225, 1226, 1227, 1228, 1233, 1234, 1238, 1241, 1243, 1244, 1247, 1250, 1251, 1252, 1253, 1255, 1256, 1257, 1261, 1262, 1263, 1264, 1267, 1268, 1269, 1271, 1273, 1280, 1282, 1285, 1286, 1293, 1294, 1296, 1299, 1304, 1306, 1312, 1313, 1315, 1317, 1318, 1322, 1323, 1324, 1325, 1328, 1329, 1333, 1336, 1337, 1339, 1341, 1343, 1345, 1346, 1347, 1348, 1349, 1351, 1352, 1354, 1355, 1357, 1359, 1363, 1366, 1371, 1372, 1375, 1376, 1377, 1379, 1382, 1383, 1384, 1385, 1387, 1388, 1389, 1391, 1393, 1396, 1397, 1401, 1402, 1403, 1405, 1408, 1411, 1412, 1413, 1415, 1417, 1418, 1421, 1424, 1431, 1432, 1436, 1437, 1438, 1441, 1444, 1445, 1448, 1454, 1457, 1458, 1461, 1465, 1466, 1467, 1468, 1469, 1472, 1473, 1475, 1477, 1478, 1486, 1492, 1497, 1501, 1502, 1503, 1504, 1507, 1509, 1513, 1514, 1516, 1517, 1519, 1521, 1522, 1525, 1527, 1528, 1529, 1532, 1535, 1536, 1537, 1538, 1539, 1541, 1544, 1546, 1552, 1555, 1556, 1557, 1561, 1563, 1565, 1568, 1569, 1573, 1574, 1576, 1577, 1585, 1587, 1588, 1589, 1591, 1592, 1593, 1594, 1600, 1603, 1604, 1611, 1616, 1618, 1622, 1623, 1625, 1629, 1631, 1633, 1636, 1639, 1641, 1642, 1643, 1646, 1647, 1648, 1649, 1651, 1654, 1655, 1658, 1661, 1664, 1671, 1673, 1675, 1676, 1678, 1679, 1682, 1684, 1685, 1687, 1688, 1689, 1691, 1696, 1701, 1703, 1706, 1707, 1711, 1712, 1713, 1714, 1715, 1717, 1718, 1719, 1724, 1726, 1727, 1728, 1731, 1732, 1735, 1737, 1739, 1744, 1745, 1751, 1754, 1756, 1757, 1761, 1762, 1763, 1765, 1766, 1769, 1772, 1773, 1774, 1775, 1779, 1781, 1784, 1791, 1792, 1793, 1795, 1796, 1797, 1799, 1803, 1805, 1807, 1808, 1809, 1813, 1814, 1816, 1817, 1819, 1821, 1822, 1825, 1828, 1829, 1832, 1835, 1837, 1838, 1839, 1841, 1843, 1844, 1851, 1852, 1853, 1856, 1857, 1858, 1859, 1863, 1864, 1865, 1868, 1874, 1875, 1882, 1883, 1888, 1891, 1893, 1894, 1895, 1897, 1899, 1903, 1906, 1909, 1912, 1915, 1916, 1917, 1919, 1921, 1922, 1923, 1927, 1928, 1929, 1934, 1936, 1937, 1939, 1941, 1942, 1943, 1944, 1945, 1948, 1952, 1954, 1957, 1959, 1961, 1963, 1964, 1966, 1967, 1969, 1971, 1975, 1977, 1981, 1982, 1983, 1984, 1985, 1991, 1994, 1996, 2000, 2005, 2007, 2008, 2009, 2012, 2018, 2019, 2021, 2023, 2025, 2026, 2031, 2032, 2033, 2036, 2038, 2041, 2042, 2043, 2045, 2047, 2049, 2051, 2056, 2057, 2059, 2061, 2062, 2066, 2071, 2073, 2075, 2077, 2078, 2084, 2092, 2095, 2096, 2097, 2098, 2101, 2102, 2103, 2104, 2105, 2107, 2116, 2117, 2119, 2122, 2123, 2125, 2126, 2127, 2133, 2138, 2144, 2147, 2149, 2151, 2152, 2155, 2157, 2159, 2164, 2165, 2167, 2168, 2169, 2171, 2173, 2174, 2176, 2177, 2181, 2182, 2183, 2186, 2188, 2189, 2191, 2192, 2194, 2195, 2199, 2201, 2206, 2215, 2216, 2217, 2218, 2219, 2224, 2225, 2227, 2228, 2229, 2231, 2234, 2241, 2245, 2246, 2248, 2249, 2252, 2253, 2257, 2258, 2259, 2263, 2264, 2271, 2272, 2276, 2279, 2283, 2284, 2285, 2291, 2299, 2302, 2303, 2304, 2305, 2306, 2307, 2308, 2312, 2313, 2315, 2317, 2319, 2321, 2323, 2326, 2327, 2329, 2335, 2336, 2342, 2344, 2348, 2349, 2353, 2359, 2361, 2362, 2363, 2367, 2368, 2369, 2372, 2374, 2375, 2384, 2386, 2391, 2395, 2396, 2402, 2403, 2404, 2407, 2413, 2416, 2419, 2421, 2425, 2426, 2427, 2428, 2429, 2432, 2433, 2434, 2435, 2439, 2443, 2446, 2449, 2452, 2453, 2455, 2456, 2458, 2461, 2462, 2463, 2468, 2469, 2471, 2474, 2476, 2479, 2481, 2483, 2487, 2488, 2489, 2491, 2493, 2495, 2497, 2498, 2500, 2501, 2504, 2507, 2509, 2511, 2512, 2513, 2515, 2517, 2518, 2519, 2523, 2524, 2525, 2527, 2528, 2529, 2533, 2536, 2537, 2545, 2547, 2554, 2558, 2559, 2560, 2561, 2563, 2564, 2566, 2567, 2569, 2571, 2572, 2573, 2575, 2577, 2578, 2581, 2582, 2587, 2588, 2589, 2592, 2594, 2597, 2599, 2601, 2602, 2603, 2605, 2606, 2608, 2611, 2612, 2614, 2615, 2619, 2623, 2624, 2627, 2629, 2631, 2636, 2637, 2638, 2641, 2642, 2643, 2644, 2645, 2648, 2649, 2651, 2653, 2654, 2656, 2661, 2662, 2669, 2672, 2673, 2675, 2681, 2692, 2696, 2701, 2704, 2705, 2708, 2721, 2722, 2723, 2725, 2727, 2732, 2733, 2734, 2735, 2738, 2743, 2744, 2746, 2747, 2752, 2757, 2759, 2761, 2762, 2763, 2764, 2768, 2771, 2773, 2776, 2779, 2781, 2783, 2785, 2787, 2792, 2798, 2799, 2804, 2807, 2811, 2813, 2815, 2816, 2817, 2818, 2823, 2824, 2825, 2827, 2831, 2836, 2839, 2841, 2845, 2846, 2848, 2853, 2854, 2855, 2858, 2859, 2863, 2864, 2866, 2867, 2869, 2872, 2873, 2875, 2876, 2878, 2881, 2883, 2885, 2888, 2889, 2891, 2893, 2894, 2896, 2899, 2901, 2902, 2906, 2908, 2911, 2913, 2916, 2918, 2921, 2923, 2929, 2931, 2932, 2933, 2935, 2936, 2941, 2942, 2943, 2944, 2947, 2949, 2951, 2956, 2959, 2962, 2965, 2966, 2972, 2973, 2974, 2977, 2978, 2979, 2981, 2983, 2984, 2986, 2987, 2989, 2991, 2993, 2995, 2997, 2998,3100};

int main(void){
	int n,i=0;
	scanf("%d",&n);	
	while(ap[i]<=n)i++;
	printf("%d\n",i);	
	return 0;
}