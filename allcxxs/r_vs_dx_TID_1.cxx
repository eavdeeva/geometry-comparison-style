void r_vs_dx_TID_1()
{
//=========Macro generated from canvas: c_r_vs_dx_TID_1/r vs. dx at TID level
//=========  (Mon Jul  6 19:49:39 2015) by ROOT version6.02/05
   TCanvas *c_r_vs_dx_TID_1 = new TCanvas("c_r_vs_dx_TID_1", "r vs. dx at TID level",0,0,3508,2480);
   c_r_vs_dx_TID_1->Range(0,0,1,1);
   c_r_vs_dx_TID_1->SetFillColor(0);
   c_r_vs_dx_TID_1->SetBorderMode(0);
   c_r_vs_dx_TID_1->SetBorderSize(2);
   c_r_vs_dx_TID_1->SetTickx(1);
   c_r_vs_dx_TID_1->SetTicky(1);
   c_r_vs_dx_TID_1->SetLeftMargin(0.18);
   c_r_vs_dx_TID_1->SetRightMargin(0.05);
   c_r_vs_dx_TID_1->SetBottomMargin(0.16);
   c_r_vs_dx_TID_1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("r_vs_dx_TID_1");
   multigraph->SetTitle("TID;r /cm;#Deltax /#mum");
   
   Double_t rdxTIDp_fx91[408] = {
   28.50827,
   28.50958,
   28.36989,
   28.37155,
   28.32464,
   28.32084,
   28.37696,
   28.36577,
   28.50604,
   28.5023,
   28.67494,
   28.67907,
   28.84758,
   28.84787,
   28.97701,
   28.97659,
   29.02617,
   29.02839,
   28.9863,
   28.9866,
   28.84972,
   28.85146,
   28.67715,
   28.68001,
   28.42313,
   28.42269,
   28.34623,
   28.34883,
   28.36251,
   28.3605,
   28.45885,
   28.45617,
   28.61181,
   28.61252,
   28.79293,
   28.79395,
   28.92851,
   28.93265,
   29.00601,
   29.0064,
   28.98274,
   28.98584,
   28.89797,
   28.89716,
   28.74408,
   28.74335,
   28.57174,
   28.56967,
   36.51485,
   36.50647,
   36.40314,
   36.39975,
   36.3704,
   36.36822,
   36.42545,
   36.42542,
   36.55374,
   36.55669,
   36.72995,
   36.72562,
   36.88118,
   36.88501,
   36.99835,
   36.99685,
   37.03447,
   37.03831,
   36.96411,
   36.96358,
   36.82715,
   36.82323,
   36.66876,
   36.67259,
   36.4399,
   36.43946,
   36.36234,
   36.36588,
   36.38689,
   36.38509,
   36.48643,
   36.48755,
   36.64454,
   36.64684,
   36.81951,
   36.81611,
   36.96297,
   36.94967,
   37.02606,
   37.02936,
   37.0091,
   37.01151,
   36.91522,
   36.91639,
   36.75586,
   36.7533,
   36.58981,
   36.59058,
   44.59728,
   44.51104,
   44.44849,
   44.41982,
   44.4213,
   44.45479,
   44.51907,
   44.60843,
   44.70566,
   44.79832,
   44.9028,
   44.98318,
   45.04211,
   45.08591,
   45.08664,
   45.04325,
   44.9788,
   44.89736,
   44.79729,
   44.69362,
   44.53497,
   44.44464,
   44.41095,
   44.38246,
   44.41146,
   44.45991,
   44.5439,
   44.63538,
   44.7485,
   44.85387,
   44.96404,
   45.03996,
   45.0901,
   45.11119,
   45.10027,
   45.04187,
   44.96807,
   44.86012,
   44.74313,
   44.62514,
   28.50243,
   28.49796,
   28.36939,
   28.36726,
   28.32419,
   28.32067,
   28.37016,
   28.37109,
   28.51388,
   28.51011,
   28.69183,
   28.69196,
   28.86537,
   28.86237,
   28.98472,
   28.98538,
   29.03306,
   29.03354,
   28.98203,
   28.97944,
   28.85305,
   28.8546,
   28.6807,
   28.67927,
   28.42698,
   28.4244,
   28.34461,
   28.34342,
   28.35712,
   28.35658,
   28.45293,
   28.45387,
   28.60507,
   28.60487,
   28.7825,
   28.78357,
   28.93272,
   28.92841,
   29.0057,
   29.00754,
   29.00252,
   29.00061,
   28.90307,
   28.90307,
   28.74842,
   28.75265,
   28.57432,
   28.57146,
   36.52092,
   36.52062,
   36.39033,
   36.38968,
   36.34532,
   36.35068,
   36.39272,
   36.39102,
   36.54306,
   36.54188,
   36.70961,
   36.71283,
   36.88059,
   36.87703,
   36.99957,
   37.00071,
   37.04498,
   37.04637,
   36.99203,
   36.99316,
   36.85989,
   36.86109,
   36.6854,
   36.69011,
   36.45071,
   36.45055,
   36.36604,
   36.367,
   36.3643,
   36.36707,
   36.46244,
   36.46293,
   36.61929,
   36.62719,
   36.79446,
   36.79625,
   36.95159,
   36.95004,
   37.03716,
   37.04306,
   37.02877,
   37.03404,
   36.9365,
   36.94012,
   36.78428,
   36.78255,
   36.60469,
   36.59724,
   44.56472,
   44.48045,
   44.42609,
   44.40902,
   44.42067,
   44.46978,
   44.53207,
   44.62403,
   44.7233,
   44.83733,
   44.92648,
   45.00663,
   45.06509,
   45.09456,
   45.08681,
   45.05116,
   44.97683,
   44.87434,
   44.77435,
   44.66248,
   44.5065,
   44.43155,
   44.38596,
   44.37645,
   44.39271,
   44.45573,
   44.55634,
   44.65455,
   44.76519,
   44.88524,
   44.99472,
   45.06013,
   45.11044,
   45.12323,
   45.09473,
   45.03568,
   44.94655,
   44.84013,
   44.7262,
   44.60649,
   28.54307,
   28.53978,
   28.37986,
   28.38069,
   28.3085,
   28.30861,
   28.33249,
   28.33258,
   28.45276,
   28.44908,
   28.62764,
   28.62801,
   28.81918,
   28.81943,
   28.97287,
   28.97294,
   29.04827,
   29.04526,
   29.03166,
   29.03373,
   28.91188,
   28.9119,
   28.73122,
   28.72814,
   28.43904,
   28.44193,
   28.33942,
   28.33967,
   28.32513,
   28.32458,
   28.40454,
   28.40423,
   28.56016,
   28.56277,
   28.74083,
   28.739,
   28.90719,
   28.90698,
   29.01315,
   29.01158,
   29.03094,
   29.02251,
   28.94575,
   28.94831,
   28.79321,
   28.79008,
   28.61182,
   28.60896,
   36.54475,
   36.54459,
   36.39915,
   36.38847,
   36.33261,
   36.33001,
   36.36843,
   36.36417,
   36.50058,
   36.49754,
   36.66968,
   36.66916,
   36.85181,
   36.85267,
   36.99269,
   36.99256,
   37.05802,
   37.05115,
   37.02817,
   37.02642,
   36.90986,
   36.90785,
   36.72646,
   36.72665,
   36.4523,
   36.45098,
   36.34835,
   36.34761,
   36.33905,
   36.34332,
   36.42167,
   36.42202,
   36.56582,
   36.56661,
   36.76255,
   36.76447,
   36.9409,
   36.93532,
   37.04665,
   37.03984,
   37.05062,
   37.05308,
   36.97297,
   36.97205,
   36.81564,
   36.81074,
   36.69869,
   36.63268,
   44.60563,
   44.51262,
   44.4314,
   44.39642,
   44.38302,
   44.41082,
   44.46672,
   44.55621,
   44.66161,
   44.78568,
   44.90059,
   44.98902,
   45.05563,
   45.10845,
   45.12468,
   45.09292,
   45.02158,
   44.93347,
   44.83855,
   44.72215,
   44.55023,
   44.45789,
   44.38711,
   44.36167,
   44.36659,
   44.41821,
   44.49796,
   44.59949,
   44.71354,
   44.84377,
   44.94785,
   45.04256,
   45.10179,
   45.14234,
   45.12624,
   45.07907,
   45.00238,
   44.897,
   44.77934,
   44.65274};
   Double_t rdxTIDp_fy91[408] = {
   86.33043,
   67.02249,
   -69.2308,
   -85.77307,
   -70.61494,
   -76.20904,
   -71.13766,
   -45.48244,
   -98.79849,
   -91.39529,
   43.71593,
   12.00972,
   -103.7843,
   -115.9394,
   -169.436,
   -155.9951,
   -95.95714,
   -102.8203,
   -68.34363,
   -63.77258,
   4.71537,
   11.2126,
   -33.05711,
   -30.12653,
   -47.31193,
   -17.97051,
   -70.84553,
   -27.56269,
   -57.6026,
   -60.95844,
   -72.63416,
   -68.79341,
   -110.677,
   -133.1587,
   -148.1616,
   -177.2036,
   -93.32096,
   -123.6029,
   -103.1689,
   -97.11621,
   -61.17957,
   -71.61189,
   -62.681,
   -57.35828,
   -23.52394,
   3.31945,
   -61.92069,
   -54.30372,
   -29.81015,
   -107.4088,
   -93.03771,
   -108.1518,
   -98.49696,
   -96.97803,
   -73.46648,
   -58.55946,
   -16.33159,
   -15.47949,
   -73.11335,
   -17.17864,
   -31.53472,
   -53.9728,
   -19.35023,
   2.100072,
   -60.81104,
   -59.33034,
   -61.11405,
   -71.1504,
   -43.06699,
   -86.02743,
   -114.6135,
   -95.33759,
   -195.2236,
   -170.0003,
   -73.20199,
   -24.86188,
   -53.86084,
   -59.53753,
   -64.5534,
   -74.69388,
   -102.5768,
   -143.9784,
   -104.398,
   -64.98492,
   -263.4718,
   -115.9118,
   -61.58922,
   -78.42291,
   -52.59476,
   -62.83031,
   -67.54373,
   -68.84383,
   -90.77676,
   -102.2903,
   -171.6388,
   -141.9906,
   -85.88976,
   66.27225,
   -55.47644,
   -68.92906,
   -59.22138,
   -61.12259,
   -54.1128,
   -84.15284,
   20.73401,
   0.04794012,
   -62.58493,
   -284.631,
   -102.1137,
   -194.0248,
   -52.21665,
   -59.31686,
   -68.90965,
   -58.32393,
   -102.7158,
   12.92058,
   -87.12072,
   -136.7446,
   -60.34322,
   -111.9758,
   -52.51581,
   -55.36831,
   -104.2166,
   -11.80704,
   40.02204,
   158.964,
   140.7749,
   30.11201,
   9.09989,
   -17.58144,
   -64.58887,
   -82.26453,
   -73.04022,
   -77.27759,
   -167.4454,
   -90.65897,
   -10.71095,
   -70.28352,
   -9.623999,
   -29.88605,
   -70.80469,
   -78.06892,
   -59.52434,
   -56.0989,
   -87.0317,
   -68.39352,
   -146.219,
   -139.7586,
   23.5346,
   52.53961,
   -3.895318,
   13.34115,
   -87.31177,
   -70.28465,
   -57.18962,
   -66.19994,
   -39.46834,
   -40.9256,
   4.92641,
   -19.66515,
   -52.72641,
   -47.36008,
   -24.49443,
   -20.27344,
   -52.50572,
   -55.83769,
   -69.81686,
   -75.18941,
   -90.51718,
   -73.99296,
   -159.7569,
   -139.6288,
   -228.8735,
   -149.8462,
   -99.48306,
   -89.0052,
   -47.72103,
   -45.45007,
   -83.67103,
   -95.74307,
   -110.8422,
   -86.23108,
   -135.3846,
   -147.3,
   -54.12067,
   -68.01353,
   -125.7592,
   -113.1781,
   -93.55303,
   -54.15472,
   -78.4073,
   -66.99922,
   -99.41199,
   -106.5354,
   -78.10885,
   -83.97145,
   -118.7879,
   -61.8039,
   -60.86178,
   -61.8037,
   -60.40033,
   -53.38812,
   -61.28887,
   -75.34375,
   -77.93941,
   -93.20507,
   -144.3764,
   -105.7405,
   -71.14117,
   -66.40449,
   -149.6224,
   -127.662,
   -67.41067,
   -60.78452,
   -87.58106,
   -85.16042,
   -18.36119,
   -75.69023,
   -122.1532,
   -116.1953,
   -71.75066,
   -38.28859,
   -64.22524,
   -97.9211,
   -38.2207,
   -52.20392,
   -63.80558,
   -53.77537,
   -71.96059,
   -90.96889,
   -113.0944,
   -179.5774,
   29.15115,
   34.75212,
   -116.2987,
   -62.46438,
   45.44515,
   -78.50642,
   -170.2638,
   -40.16206,
   40.39302,
   -66.27808,
   -71.45844,
   68.9319,
   -170.4879,
   101.5713,
   -32.42855,
   -53.60544,
   -33.81449,
   -53.88478,
   -64.99632,
   -55.94736,
   -120.813,
   -181.9642,
   -114.7789,
   -109.9225,
   -98.02393,
   -53.79744,
   -26.16046,
   -12.61952,
   96.14823,
   157.944,
   -69.43781,
   -67.67963,
   9.88636,
   -57.79781,
   -49.31773,
   -38.56122,
   -128.9686,
   -96.83453,
   9.088336,
   -49.69825,
   7.118815,
   -58.48125,
   -20.80069,
   -54.07133,
   -34.02859,
   -50.70454,
   -65.45779,
   -64.40324,
   -81.92257,
   -55.16837,
   6.912257,
   14.99351,
   -80.54535,
   -100.6735,
   -60.73059,
   -97.18671,
   -133.2582,
   -121.2203,
   -93.3466,
   -84.62479,
   -45.00169,
   -37.62725,
   -41.78809,
   -85.41586,
   -112.812,
   -62.88946,
   -11.67756,
   -9.000854,
   -54.48246,
   -57.92877,
   -105.2499,
   -109.9555,
   -103.0595,
   -122.2981,
   -60.28325,
   -35.80556,
   -131.5398,
   -133.4215,
   -103.2567,
   -103.5556,
   -98.25816,
   -94.4511,
   -93.68997,
   -79.71744,
   -109.6834,
   -110.0783,
   -7.521221,
   -14.28607,
   -3.985958,
   12.4476,
   -77.77666,
   -134.2041,
   -69.00314,
   -70.72659,
   -81.43774,
   -65.45045,
   -49.51529,
   -22.43894,
   -74.17359,
   -68.74604,
   20.47001,
   5.585108,
   -18.68357,
   -28.34171,
   -93.41195,
   -80.33336,
   -97.54074,
   -102.0818,
   -108.2622,
   -110.7487,
   -37.67316,
   -38.74821,
   -128.2343,
   -117.0509,
   -112.7504,
   -99.46818,
   -84.38332,
   -68.48835,
   -80.22928,
   -80.11734,
   -18.99199,
   -28.10251,
   56.43465,
   19.55412,
   -116.5102,
   -82.55241,
   -109.2711,
   -84.31503,
   -59.50842,
   -81.4752,
   -89.17352,
   -84.52277,
   -137.9881,
   -153.3721,
   -74.36734,
   -702.3337,
   -7.72471,
   -109.2813,
   -142.0704,
   -83.63656,
   -82.19019,
   -70.01099,
   -67.69485,
   -69.71284,
   -27.66915,
   -103.8624,
   -166.4569,
   -227.2922,
   -109.0432,
   -124.7872,
   -120.6801,
   -105.0084,
   -122.9672,
   -121.0091,
   15.04919,
   21.92476,
   -43.48069,
   -132.2476,
   -184.1931,
   -102.6534,
   -70.21838,
   -62.12608,
   -27.50519,
   -41.10228,
   -51.79519,
   -104.745,
   -33.82027,
   -152.4165,
   -135.7891,
   -149.3831,
   -108.0828,
   -97.57749,
   -95.38469,
   -179.7126,
   -96.90567,
   -109.6153};
   TGraph *graph = new TGraph(408,rdxTIDp_fx91,rdxTIDp_fy91);
   graph->SetName("rdxTIDp");
   graph->SetTitle("TID at z>=0;r /cm;#Deltax /#mum");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(6);
   multigraph->Add(graph,"P");
   
   Double_t rdxTIDn_fx92[408] = {
   28.53669,
   28.53476,
   28.36146,
   28.36057,
   28.27429,
   28.27457,
   28.29843,
   28.29734,
   28.4258,
   28.42577,
   28.62421,
   28.62624,
   28.80216,
   28.80226,
   28.97163,
   28.97209,
   29.04532,
   29.04605,
   29.05019,
   29.05094,
   28.93246,
   28.93195,
   28.73572,
   28.73837,
   28.45673,
   28.45475,
   28.32909,
   28.33081,
   28.2965,
   28.29539,
   28.36906,
   28.37027,
   28.53108,
   28.53208,
   28.7179,
   28.71729,
   28.90187,
   28.9023,
   29.02145,
   29.01805,
   29.04692,
   29.04859,
   28.98624,
   28.98592,
   28.83443,
   28.83211,
   28.63828,
   28.63305,
   36.5704,
   36.56993,
   36.40133,
   36.40173,
   36.32199,
   36.32019,
   36.33757,
   36.33502,
   36.45086,
   36.4514,
   36.64795,
   36.64859,
   36.85114,
   36.85362,
   37.00404,
   37.00397,
   37.07194,
   37.0735,
   37.04791,
   37.04634,
   36.94312,
   36.94097,
   36.76578,
   36.76029,
   36.53954,
   36.48073,
   36.35588,
   36.35519,
   36.31125,
   36.31384,
   36.37686,
   36.37894,
   36.53322,
   36.5336,
   36.72585,
   36.7224,
   36.90643,
   36.90556,
   37.03944,
   37.04089,
   37.08147,
   37.08548,
   37.02074,
   37.01971,
   36.86447,
   36.86303,
   36.66461,
   36.66639,
   44.59457,
   44.49166,
   44.41383,
   44.37529,
   44.37813,
   44.40437,
   44.46411,
   44.56837,
   44.67938,
   44.7924,
   44.90389,
   45.00556,
   45.08502,
   45.13265,
   45.12901,
   45.09612,
   45.02571,
   44.93379,
   44.80373,
   44.70598,
   44.54885,
   44.44609,
   44.39363,
   44.34756,
   44.35374,
   44.39708,
   44.46688,
   44.57736,
   44.70555,
   44.84631,
   44.93964,
   45.04883,
   45.11721,
   45.14359,
   45.13613,
   45.10742,
   45.02261,
   44.91308,
   44.79379,
   44.66696,
   28.56149,
   28.56154,
   28.36446,
   28.36118,
   28.25611,
   28.25282,
   28.26007,
   28.25928,
   28.37572,
   28.37064,
   28.57504,
   28.57659,
   28.80152,
   28.80351,
   28.9942,
   28.99747,
   29.10536,
   29.10885,
   29.09633,
   29.09406,
   28.99139,
   28.9869,
   28.78718,
   28.78602,
   28.40198,
   28.40533,
   28.26429,
   28.26984,
   28.24593,
   28.24932,
   28.34983,
   28.35271,
   28.52803,
   28.52974,
   28.74424,
   28.74317,
   28.95026,
   28.94854,
   29.08369,
   29.07976,
   29.09658,
   29.09571,
   29.00215,
   29.00287,
   28.8219,
   28.8213,
   28.60948,
   28.60772,
   36.51068,
   36.50739,
   36.3381,
   36.333,
   36.26002,
   36.25353,
   36.30144,
   36.30068,
   36.44916,
   36.44928,
   36.65474,
   36.6586,
   36.88667,
   36.90262,
   37.05729,
   37.05939,
   37.13834,
   37.13661,
   37.09115,
   37.0918,
   36.95259,
   36.95136,
   36.73427,
   36.73009,
   36.39222,
   36.40861,
   36.27478,
   36.2756,
   36.26029,
   36.26086,
   36.3583,
   36.36319,
   36.56323,
   36.56205,
   36.78284,
   36.78803,
   37.00198,
   36.9955,
   37.11902,
   37.11808,
   37.12773,
   37.12772,
   37.02933,
   37.03231,
   36.84417,
   36.85642,
   36.60159,
   36.60041,
   44.64695,
   44.52653,
   44.44072,
   44.36725,
   44.33859,
   44.33996,
   44.38734,
   44.47791,
   44.59443,
   44.72128,
   44.86335,
   44.97848,
   45.07181,
   45.12841,
   45.15753,
   45.14619,
   45.10428,
   45.00666,
   44.9025,
   44.77077,
   44.59237,
   44.46442,
   44.3728,
   44.32383,
   44.29734,
   44.34364,
   44.41257,
   44.51774,
   44.63647,
   44.78258,
   44.9131,
   45.03271,
   45.1117,
   45.17945,
   45.18395,
   45.16744,
   45.09391,
   44.98577,
   44.85489,
   44.72533,
   28.50518,
   28.50646,
   28.28981,
   28.29039,
   28.17985,
   28.18327,
   28.21679,
   28.21393,
   28.36908,
   28.36604,
   28.60011,
   28.59885,
   28.86644,
   28.8631,
   29.07185,
   29.0675,
   29.16884,
   29.16416,
   29.14381,
   29.14502,
   28.99551,
   28.99652,
   28.76152,
   28.75908,
   28.40096,
   28.40109,
   28.24571,
   28.24476,
   28.20082,
   28.20063,
   28.2933,
   28.29532,
   28.48495,
   28.48833,
   28.72976,
   28.73088,
   28.96073,
   28.95758,
   29.11009,
   29.10893,
   29.1524,
   29.15115,
   29.06003,
   29.05572,
   28.86944,
   28.86957,
   28.62905,
   28.63122,
   36.52883,
   36.52752,
   36.32227,
   36.31966,
   36.21885,
   36.21785,
   36.25443,
   36.24985,
   36.398,
   36.39725,
   36.63739,
   36.63083,
   36.87676,
   36.87451,
   37.0724,
   37.07423,
   37.17556,
   37.16978,
   37.14539,
   37.14592,
   37.00278,
   37.00097,
   36.7725,
   36.77602,
   36.41896,
   36.41773,
   36.26213,
   36.26498,
   36.22076,
   36.22191,
   36.30347,
   36.30432,
   36.49643,
   36.49481,
   36.75008,
   36.74846,
   36.98024,
   36.97656,
   37.14414,
   37.14038,
   37.17262,
   37.17237,
   37.08733,
   37.08442,
   36.89321,
   36.89245,
   36.65388,
   36.65385,
   44.57159,
   44.45027,
   44.34635,
   44.29305,
   44.27879,
   44.31098,
   44.3906,
   44.51254,
   44.64658,
   44.78883,
   44.93874,
   45.06091,
   45.16306,
   45.20249,
   45.21381,
   45.19063,
   45.09425,
   44.98103,
   44.85279,
   44.71676,
   44.49129,
   44.38039,
   44.29108,
   44.24493,
   44.25171,
   44.30859,
   44.41556,
   44.5377,
   44.69072,
   44.85941,
   45.0034,
   45.12597,
   45.20914,
   45.24691,
   45.24782,
   45.18074,
   45.1,
   44.96227,
   44.80064,
   44.63688};
   Double_t rdxTIDn_fy92[408] = {
   -91.17664,
   -95.06188,
   -167.0898,
   -161.0182,
   -95.95356,
   -98.38026,
   -81.88843,
   -97.59853,
   -79.34487,
   -86.0034,
   -115.6757,
   -156.5249,
   -89.15488,
   -89.05238,
   -85.91209,
   -85.75237,
   -83.4771,
   -83.3746,
   -51.22067,
   -59.2813,
   -11.28286,
   -10.199,
   -108.992,
   -54.93095,
   81.13158,
   67.12504,
   -15.2287,
   13.87133,
   -48.26065,
   -40.48486,
   -74.00156,
   -86.23317,
   -103.0295,
   -143.3377,
   -39.55552,
   -85.18551,
   20.07371,
   -42.95067,
   -22.97306,
   -42.58683,
   -54.31013,
   -79.43137,
   -56.32439,
   -53.37386,
   -35.72567,
   -33.2906,
   14.74268,
   -48.16742,
   -68.95379,
   -69.48115,
   -147.1513,
   -133.0297,
   -99.57331,
   -102.8285,
   -77.31681,
   -80.24352,
   -43.43689,
   -76.02505,
   -69.82669,
   -110.3125,
   -89.56497,
   -135.1807,
   -105.2661,
   -146.6675,
   -42.47065,
   -77.59353,
   -56.31179,
   -55.62048,
   -37.60097,
   -47.70209,
   -30.10737,
   -76.98333,
   -88.17216,
   -664.5431,
   -16.69411,
   -13.51829,
   -66.66393,
   -51.64215,
   -63.2591,
   -75.84525,
   -23.61814,
   -63.2791,
   -68.38834,
   -94.98488,
   64.81336,
   35.89027,
   61.27216,
   48.42801,
   -35.31756,
   -41.23722,
   -77.80035,
   -73.06718,
   -33.78842,
   -34.65372,
   17.32386,
   50.35138,
   -364.8924,
   -237.173,
   -364.1475,
   -220.8322,
   -164.43,
   -113.1822,
   -89.78233,
   -103.2246,
   -68.05836,
   77.78866,
   94.29737,
   96.50382,
   -50.80348,
   -69.95178,
   -37.89625,
   -47.15544,
   -77.19681,
   -109.8096,
   -285.3198,
   -214.2216,
   -232.7828,
   -194.7039,
   -90.93092,
   -57.37659,
   -104.442,
   -121.0544,
   -67.97984,
   -57.34546,
   -103.2415,
   -233.147,
   131.1154,
   -45.32768,
   -78.59014,
   -37.84997,
   -46.95434,
   -38.81494,
   -7.502169,
   -12.16735,
   -63.20079,
   -182.2035,
   21.80736,
   47.08727,
   -62.33274,
   -54.22042,
   -84.04942,
   -74.83012,
   -87.75774,
   -96.43829,
   -71.03502,
   -63.18039,
   -86.11708,
   -85.97721,
   -82.8118,
   -82.71057,
   -79.52331,
   -79.42017,
   -77.13378,
   -77.00438,
   -62.09924,
   -58.39675,
   1.448651,
   -40.55372,
   34.39878,
   4.555253,
   -105.4388,
   -127.4571,
   -141.2445,
   -132.439,
   -87.75894,
   -87.87534,
   -87.77507,
   -87.89144,
   -86.08416,
   -86.20452,
   -83.16155,
   -83.30312,
   -79.77376,
   -79.87576,
   -76.82803,
   -76.94885,
   -67.81413,
   -73.02329,
   -70.88438,
   -62.87917,
   -47.93885,
   -65.91188,
   -28.02691,
   -73.52357,
   -184.3622,
   -254.2395,
   -144.4068,
   -238.7363,
   -59.69607,
   -127.0753,
   -84.2414,
   -93.56443,
   -116.4144,
   -86.08099,
   -85.31946,
   -85.1978,
   -81.12553,
   -216.3877,
   -76.94399,
   -76.82276,
   -59.45666,
   -35.30062,
   -69.2161,
   -60.25785,
   -73.77399,
   -82.68649,
   -119.3423,
   -168.0302,
   -192.8212,
   -79.76067,
   -78.26839,
   -124.205,
   -69.2949,
   -93.14479,
   -76.63292,
   -81.04571,
   -194.3829,
   -163.5879,
   -110.3002,
   -145.594,
   -154.2908,
   -97.72875,
   -52.78995,
   -44.84558,
   -53.67128,
   -52.97479,
   -90.37725,
   -81.79241,
   -136.441,
   -53.6513,
   -235.8267,
   -263.8328,
   -122.5834,
   -204.2952,
   -100.5599,
   -119.7569,
   -69.57513,
   -76.98413,
   -76.27132,
   -26.59673,
   -33.19114,
   8.335844,
   -146.922,
   -69.25607,
   -89.87515,
   1.322255,
   -51.99897,
   -75.01733,
   -92.25019,
   -138.0217,
   -60.4655,
   -155.4288,
   -157.6004,
   -264.7867,
   -142.0012,
   -63.06322,
   -102.1873,
   -90.36607,
   -68.58398,
   -92.12077,
   -20.57076,
   -70.35769,
   -138.4867,
   12.45477,
   -29.6933,
   -110.808,
   -75.25977,
   -66.6472,
   -74.73922,
   -68.49649,
   -125.8674,
   -37.77708,
   -87.14206,
   -47.21423,
   -137.1962,
   -141.3302,
   -111.5452,
   -105.8554,
   -82.23859,
   -93.09652,
   -123.2734,
   -92.30103,
   -128.5105,
   -69.89133,
   -189.3148,
   -107.7495,
   -79.50838,
   -8.567312,
   -128.8259,
   -89.87183,
   -45.80772,
   -50.39138,
   -16.97774,
   -21.49128,
   15.51762,
   5.090457,
   -40.45515,
   -37.92438,
   -27.35705,
   -22.19396,
   -66.21265,
   -62.69546,
   -67.65508,
   -81.18436,
   -55.61301,
   -81.52151,
   -82.18214,
   -89.43559,
   -108.0546,
   -84.4678,
   -7.283469,
   11.40182,
   -37.73394,
   -30.94998,
   -49.80644,
   -55.81575,
   -11.12261,
   -14.42781,
   -35.23394,
   -12.65692,
   -42.28014,
   -70.92109,
   -96.94925,
   -114.4522,
   -112.1843,
   -123.6598,
   -79.12662,
   -92.96274,
   -298.6503,
   -112.4088,
   -148.7451,
   -76.67834,
   -65.68278,
   -36.14938,
   -83.87675,
   -65.55931,
   -63.41484,
   -22.47715,
   -55.41911,
   -49.25639,
   -81.40598,
   -85.53757,
   -28.56138,
   -4.65643,
   -106.0167,
   -130.0959,
   -84.7107,
   -63.35711,
   -72.9305,
   -64.48931,
   -82.12595,
   -89.22826,
   -47.92593,
   -43.62114,
   -38.09086,
   -28.29588,
   -22.99883,
   7.16988,
   -66.50962,
   -35.00698,
   -33.14781,
   -23.76151,
   -72.96446,
   -70.34925,
   -93.13669,
   -112.0829,
   -28.69848,
   -30.61376,
   19.14709,
   -188.4517,
   -170.6242,
   -98.3783,
   -87.42,
   -87.76035,
   -84.79774,
   -121.2033,
   -87.36571,
   -52.36648,
   15.45647,
   16.40522,
   -31.10829,
   32.10713,
   -25.87202,
   -55.63498,
   -99.43195,
   -137.4996,
   -169.9387,
   -74.00969,
   -91.93412,
   -137.4384,
   -69.16436,
   -74.3134,
   -89.25614,
   -99.70221,
   -154.7201,
   -97.96,
   -4.669068,
   -86.04528,
   -93.18162,
   31.89255,
   -126.2601,
   -35.00739,
   -43.45671,
   -64.38992,
   -84.66939,
   -106.2145,
   -235.3752,
   -181.9589};
   graph = new TGraph(408,rdxTIDn_fx92,rdxTIDn_fy92);
   graph->SetName("rdxTIDn");
   graph->SetTitle("TID at z<0;r /cm;#Deltax /#mum");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(6);
   multigraph->Add(graph,"P");
   multigraph->Draw("A");
   multigraph->GetXaxis()->SetTitle("r /cm");
   multigraph->GetXaxis()->SetLabelFont(132);
   multigraph->GetXaxis()->SetLabelSize(0.08);
   multigraph->GetXaxis()->SetTitleSize(0.08);
   multigraph->GetYaxis()->SetTitle("#Deltax /#mum");
   multigraph->GetYaxis()->SetLabelFont(132);
   multigraph->GetYaxis()->SetLabelSize(0.08);
   multigraph->GetYaxis()->SetTitleSize(0.08);
   multigraph->GetYaxis()->SetTitleFont(42);
   c_r_vs_dx_TID_1->Modified();
   c_r_vs_dx_TID_1->cd();
   c_r_vs_dx_TID_1->SetSelected(c_r_vs_dx_TID_1);
}