void phi_vs_dx_PXF_1()
{
//=========Macro generated from canvas: c_phi_vs_dx_PXF_1/phi vs. dx at PXF level
//=========  (Mon Jul  6 19:49:41 2015) by ROOT version6.02/05
   TCanvas *c_phi_vs_dx_PXF_1 = new TCanvas("c_phi_vs_dx_PXF_1", "phi vs. dx at PXF level",0,0,3508,2480);
   c_phi_vs_dx_PXF_1->Range(0,0,1,1);
   c_phi_vs_dx_PXF_1->SetFillColor(0);
   c_phi_vs_dx_PXF_1->SetBorderMode(0);
   c_phi_vs_dx_PXF_1->SetBorderSize(2);
   c_phi_vs_dx_PXF_1->SetTickx(1);
   c_phi_vs_dx_PXF_1->SetTicky(1);
   c_phi_vs_dx_PXF_1->SetLeftMargin(0.18);
   c_phi_vs_dx_PXF_1->SetRightMargin(0.05);
   c_phi_vs_dx_PXF_1->SetBottomMargin(0.16);
   c_phi_vs_dx_PXF_1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("phi_vs_dx_PXF_1");
   multigraph->SetTitle("PXF;#phi /rad;#Deltax /#mum");
   
   Double_t phidxPXFp_fx207[336] = {
   0.03707204,
   0.06572064,
   0.08218531,
   0.09115235,
   0.08693143,
   0.09998118,
   0.1068499,
   0.3065918,
   0.3320202,
   0.3468187,
   0.3542428,
   0.3567289,
   0.3658471,
   0.3721865,
   0.5818166,
   0.6031603,
   0.6155913,
   0.6230803,
   0.6296661,
   0.6358432,
   0.6404777,
   0.8622158,
   0.877214,
   0.8870639,
   0.8921788,
   0.907784,
   0.9093263,
   0.9105654,
   1.146829,
   1.153567,
   1.159252,
   1.162967,
   1.187358,
   1.183316,
   1.182122,
   1.42996,
   1.430485,
   1.432247,
   1.434169,
   1.464473,
   1.456681,
   1.452774,
   -1.483776,
   -1.47053,
   -1.462275,
   -1.457803,
   -1.442694,
   -1.441321,
   -1.440833,
   -1.237815,
   -1.222041,
   -1.210934,
   -1.204749,
   -1.194717,
   -1.190821,
   -1.188098,
   -0.9896035,
   -0.9701132,
   -0.9562725,
   -0.948854,
   -0.9470805,
   -0.938107,
   -0.9332997,
   -0.7380887,
   -0.7158789,
   -0.7004722,
   -0.6922821,
   -0.6927169,
   -0.6829804,
   -0.6766416,
   -0.4834208,
   -0.4592298,
   -0.4433111,
   -0.4342809,
   -0.4374454,
   -0.4255397,
   -0.4187371,
   -0.2232073,
   -0.1991689,
   -0.182557,
   -0.1722469,
   -0.1759571,
   -0.1636451,
   -0.1569825,
   0.03822906,
   0.06348842,
   0.08142661,
   0.09076495,
   0.08658688,
   0.09943336,
   0.1066581,
   0.3051218,
   0.3309211,
   0.3471613,
   0.355645,
   0.3541694,
   0.3652247,
   0.3720132,
   0.5813602,
   0.6036806,
   0.6173933,
   0.6245371,
   0.6297503,
   0.6359167,
   0.6411327,
   0.8611215,
   0.8770744,
   0.8869609,
   0.8922262,
   0.9055944,
   0.9090186,
   0.9109377,
   1.143884,
   1.153743,
   1.160219,
   1.163329,
   1.18583,
   1.183872,
   1.182896,
   1.432045,
   1.431427,
   1.434304,
   1.436925,
   1.467835,
   1.459294,
   1.455382,
   -1.481782,
   -1.470719,
   -1.462347,
   -1.458634,
   -1.444249,
   -1.442312,
   -1.441858,
   -1.238909,
   -1.222029,
   -1.211976,
   -1.20587,
   -1.196013,
   -1.191368,
   -1.189235,
   -0.9953528,
   -0.9715819,
   -0.9579877,
   -0.9510288,
   -0.9487534,
   -0.9394466,
   -0.9340245,
   -0.7445422,
   -0.7187906,
   -0.7021529,
   -0.6938176,
   -0.6966009,
   -0.685028,
   -0.6781793,
   -0.4868703,
   -0.4618858,
   -0.4447153,
   -0.4349291,
   -0.4390792,
   -0.4262554,
   -0.4189115,
   -0.2275489,
   -0.2002353,
   -0.1824453,
   -0.1737983,
   -0.1803244,
   -0.1648234,
   -0.1574786,
   1.720786,
   1.717322,
   1.713523,
   1.709936,
   1.755666,
   1.739899,
   1.731112,
   1.998645,
   1.988421,
   1.98181,
   1.977642,
   2.029595,
   2.009152,
   1.998407,
   2.271969,
   2.257024,
   2.248544,
   2.244433,
   2.299212,
   2.277085,
   2.265015,
   2.540776,
   2.522505,
   2.514681,
   2.510153,
   2.564984,
   2.5427,
   2.529948,
   2.802712,
   2.787429,
   2.777093,
   2.772318,
   2.826782,
   2.804675,
   2.791866,
   3.061917,
   3.047653,
   3.037784,
   3.0328,
   3.086659,
   3.064643,
   3.052489,
   -2.970032,
   -2.981079,
   -2.988164,
   -2.991976,
   -2.943871,
   -2.961724,
   -2.971922,
   -2.71909,
   -2.728863,
   -2.73434,
   -2.735229,
   -2.6922,
   -2.708748,
   -2.717769,
   -2.474648,
   -2.480153,
   -2.481996,
   -2.482895,
   -2.445318,
   -2.457609,
   -2.464748,
   -2.227289,
   -2.228385,
   -2.22714,
   -2.226402,
   -2.196817,
   -2.205167,
   -2.209687,
   -1.987255,
   -1.978823,
   -1.976505,
   -1.974708,
   -1.949281,
   -1.954399,
   -1.957103,
   -1.741132,
   -1.731721,
   -1.724877,
   -1.719712,
   -1.703971,
   -1.703725,
   -1.702896,
   1.724872,
   1.716462,
   1.712165,
   1.709139,
   1.753109,
   1.737168,
   1.72926,
   1.998784,
   1.988683,
   1.982655,
   1.978334,
   2.028977,
   2.008659,
   1.998911,
   2.274307,
   2.256907,
   2.247968,
   2.245317,
   2.298127,
   2.276754,
   2.264646,
   2.541758,
   2.522847,
   2.514254,
   2.5099,
   2.565489,
   2.542297,
   2.529553,
   2.80751,
   2.787982,
   2.776865,
   2.771839,
   2.828746,
   2.805718,
   2.792033,
   3.061655,
   3.046018,
   3.036971,
   3.032793,
   3.085279,
   3.063826,
   3.052793,
   -2.967497,
   -2.979411,
   -2.986734,
   -2.992123,
   -2.941452,
   -2.961055,
   -2.972797,
   -2.719492,
   -2.7296,
   -2.734487,
   -2.736711,
   -2.692122,
   -2.708107,
   -2.717859,
   -2.472185,
   -2.477553,
   -2.480354,
   -2.482621,
   -2.443396,
   -2.456018,
   -2.46344,
   -2.225075,
   -2.227865,
   -2.227971,
   -2.226592,
   -2.194877,
   -2.203704,
   -2.208804,
   -1.98452,
   -1.979159,
   -1.975841,
   -1.974879,
   -1.948535,
   -1.953812,
   -1.95619,
   -1.738781,
   -1.731554,
   -1.724693,
   -1.720351,
   -1.702636,
   -1.702732,
   -1.703144};
   Double_t phidxPXFp_fy207[336] = {
   -175.3514,
   -170.2421,
   -185.0661,
   -184.994,
   -170.6114,
   -172.1328,
   -195.6848,
   -177.2917,
   -170.2036,
   -168.6823,
   -148.0686,
   -159.595,
   -175.0661,
   -169.12,
   -160.3373,
   -159.6855,
   -180.457,
   -142.0523,
   -148.2375,
   -156.6017,
   -151.2858,
   -168.9937,
   -147.4096,
   -161.0928,
   -125.6585,
   -142.7189,
   -155.3932,
   -148.4586,
   -157.4351,
   -130.3043,
   -146.7294,
   -125.2971,
   -142.9528,
   -135.705,
   -134.7259,
   -150.017,
   -133.9086,
   -126.4067,
   -122.8213,
   -116.9589,
   -123.9402,
   -121.7784,
   -140.9601,
   -149.1294,
   -137.0626,
   -137.5029,
   -152.4201,
   -147.7139,
   -139.2693,
   -146.7127,
   -153.1986,
   -141.2304,
   -132.8982,
   -163.4935,
   -145.6599,
   -164.6699,
   -166.0382,
   -151.5037,
   -161.0156,
   -198.3312,
   -158.0118,
   -162.6647,
   -166.5401,
   -173.9621,
   -160.147,
   -166.9197,
   -157.5505,
   -170.9634,
   -185.5853,
   -170.556,
   -149.716,
   -174.2202,
   -161.5746,
   -92.78666,
   -162.9922,
   -166.9701,
   -147.3348,
   -180.415,
   -155.0204,
   -174.9832,
   -166.7168,
   -153.9778,
   -174.4987,
   -204.9809,
   -125.2336,
   -120.0197,
   -150.2183,
   -144.7864,
   -120.8602,
   -144.7029,
   -152.1278,
   -172.7882,
   -113.7902,
   -145.0759,
   -153.0897,
   -115.4955,
   -136.8483,
   -141.7372,
   -133.7474,
   -112.3132,
   -120.6577,
   -132.3135,
   -113.1444,
   -107.8958,
   -116.8278,
   6.643083,
   -117.8493,
   -105.5782,
   -146.6853,
   -109.8565,
   -99.45907,
   -106.5153,
   -121.7732,
   -115.9545,
   -83.04424,
   -144.5136,
   -101.0306,
   -100.9749,
   -101.9043,
   66.81512,
   -89.17316,
   -90.04095,
   -86.92059,
   -97.25996,
   -74.44724,
   -82.36531,
   -30.71553,
   -133.3251,
   -138.2896,
   -145.6626,
   -101.455,
   -141.4855,
   -147.9412,
   -48.43208,
   -159.5257,
   -160.3547,
   -178.3282,
   -128.7363,
   -155.6454,
   -152.2755,
   -131.788,
   -138.308,
   -137.6895,
   -144.5294,
   -133.9482,
   -153.1995,
   -158.3438,
   -104.0947,
   -139.9658,
   -162.9611,
   -176.9093,
   -120.3785,
   -173.4629,
   -185.6621,
   -120.7324,
   -135.47,
   -161.1541,
   -207.8811,
   -111.482,
   -164.0117,
   -194.3321,
   -154.1869,
   -152.598,
   -167.5534,
   -225.6098,
   -136.7598,
   -156.3882,
   -181.3009,
   -31.46976,
   -51.5012,
   -49.57584,
   -48.70538,
   -24.38775,
   -43.29107,
   -43.38935,
   -25.54527,
   -18.60821,
   -23.33317,
   -41.98093,
   -3.856791,
   -11.01989,
   -29.79144,
   -20.81146,
   -11.78667,
   -15.88954,
   -38.55504,
   -13.91525,
   -14.80995,
   -15.42419,
   -23.80076,
   2.375474,
   -12.89008,
   -23.93399,
   -0.2905303,
   -4.814689,
   -15.7299,
   -11.85634,
   -9.355465,
   -0.21517,
   -32.62308,
   2.011165,
   1.314543,
   1.451627,
   -3.430302,
   -17.2465,
   14.44796,
   -6.975874,
   -0.01419722,
   3.4711,
   9.750133,
   3.576447,
   -9.563919,
   0.5036635,
   -3.229993,
   -1.923987,
   -7.110399,
   -8.096972,
   -27.31849,
   -23.54757,
   -18.18188,
   -52.94502,
   -9.80487,
   -24.59917,
   -9.277117,
   -5.551916,
   -26.8893,
   -19.40188,
   -28.36399,
   -16.28706,
   -17.20259,
   -22.69065,
   -15.85663,
   -24.03893,
   -21.5498,
   -9.561925,
   -19.30362,
   -34.52892,
   -27.48627,
   -30.11728,
   -49.38834,
   -42.79222,
   -11.08047,
   -39.84143,
   -57.31853,
   -23.22911,
   -30.32004,
   -44.60656,
   -44.14217,
   -29.71179,
   -39.74044,
   -53.91522,
   -43.82494,
   -74.55846,
   -28.77229,
   -47.97143,
   -39.69106,
   -26.75229,
   -25.3876,
   -40.74274,
   -82.61679,
   -19.25706,
   -8.128354,
   -13.29615,
   -12.67093,
   -3.443708,
   -4.592065,
   -45.1979,
   -8.650638,
   9.623604,
   25.13756,
   2.724109,
   5.123658,
   25.74221,
   -102.5965,
   -6.063401,
   20.59289,
   45.94923,
   6.969525,
   4.493619,
   44.98938,
   -68.11963,
   12.58663,
   25.14179,
   11.73167,
   4.333432,
   32.85242,
   38.8841,
   47.27836,
   -1.892357,
   17.63496,
   37.03869,
   5.046547,
   23.99594,
   32.54544,
   23.3512,
   10.01481,
   26.06194,
   17.98673,
   -0.02175554,
   16.51122,
   30.70637,
   24.01304,
   -3.247818,
   -7.570472,
   28.43299,
   -6.994249,
   -1.827553,
   8.22926,
   54.13365,
   -7.903531,
   -24.83984,
   -19.5465,
   -6.825856,
   -6.790628,
   -14.45344,
   31.71877,
   -15.79398,
   -22.91343,
   -26.09325,
   -48.8209,
   -11.18923,
   -14.23347,
   79.05473,
   -27.46842,
   -29.66,
   -47.59066,
   -36.09492,
   -25.35117,
   -41.46357,
   68.62465,
   -22.8715,
   -29.86084,
   -30.48695,
   16.6453,
   -34.19878,
   -40.4239};
   TGraph *graph = new TGraph(336,phidxPXFp_fx207,phidxPXFp_fy207);
   graph->SetName("phidxPXFp");
   graph->SetTitle("PXF at z>=0;#phi /rad;#Deltax /#mum");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(6);
   multigraph->Add(graph,"P");
   
   Double_t phidxPXFn_fx208[336] = {
   0.04355085,
   0.06777824,
   0.08351708,
   0.09202548,
   0.09097906,
   0.1026975,
   0.1091356,
   0.3096733,
   0.3328182,
   0.3475623,
   0.3561382,
   0.3578325,
   0.367344,
   0.3735934,
   0.5838707,
   0.6036637,
   0.6167653,
   0.6236252,
   0.6298422,
   0.6368385,
   0.6416927,
   0.8606913,
   0.8783124,
   0.8879402,
   0.8914567,
   0.9073825,
   0.9092222,
   0.9110281,
   1.143402,
   1.153534,
   1.159294,
   1.161634,
   1.185403,
   1.183033,
   1.181925,
   1.428313,
   1.433194,
   1.433188,
   1.43447,
   1.464533,
   1.457633,
   1.453445,
   -1.479667,
   -1.469412,
   -1.461666,
   -1.459283,
   -1.443099,
   -1.441575,
   -1.440459,
   -1.235469,
   -1.220558,
   -1.210298,
   -1.204855,
   -1.19565,
   -1.190301,
   -1.18682,
   -0.9863617,
   -0.968881,
   -0.9564871,
   -0.9496163,
   -0.944903,
   -0.9366772,
   -0.9316084,
   -0.7372772,
   -0.7151625,
   -0.6994649,
   -0.6928551,
   -0.6924233,
   -0.6820195,
   -0.6754242,
   -0.4822705,
   -0.4583304,
   -0.442691,
   -0.4345694,
   -0.4358999,
   -0.424303,
   -0.4171041,
   -0.2269344,
   -0.1999408,
   -0.182845,
   -0.1734107,
   -0.1773612,
   -0.1635262,
   -0.1562627,
   0.04125866,
   0.06590513,
   0.08130966,
   0.09012213,
   0.08866837,
   0.10033,
   0.107363,
   0.307371,
   0.330312,
   0.3450549,
   0.3527437,
   0.3561215,
   0.3656262,
   0.3715907,
   0.5825259,
   0.600633,
   0.6128814,
   0.6196787,
   0.627615,
   0.6361929,
   0.6398928,
   0.8620672,
   0.8745062,
   0.8843268,
   0.8894793,
   0.9054701,
   0.9084625,
   0.9096652,
   1.141527,
   1.151365,
   1.15758,
   1.160117,
   1.182583,
   1.180642,
   1.180315,
   1.429657,
   1.429129,
   1.431818,
   1.433137,
   1.465028,
   1.457154,
   1.452881,
   -1.479725,
   -1.468485,
   -1.461447,
   -1.458736,
   -1.4406,
   -1.440563,
   -1.439641,
   -1.232903,
   -1.220375,
   -1.210434,
   -1.206788,
   -1.193231,
   -1.189002,
   -1.186756,
   -0.9870288,
   -0.970394,
   -0.9570899,
   -0.9501584,
   -0.9432815,
   -0.9359777,
   -0.9322301,
   -0.7398854,
   -0.7180137,
   -0.7017815,
   -0.6954724,
   -0.6923591,
   -0.6827323,
   -0.6769936,
   -0.4827428,
   -0.4599814,
   -0.4441333,
   -0.4358282,
   -0.4371115,
   -0.4259948,
   -0.4198907,
   -0.222824,
   -0.1999466,
   -0.1829325,
   -0.1741489,
   -0.1772044,
   -0.1642293,
   -0.1573976,
   1.724661,
   1.716903,
   1.712434,
   1.708929,
   1.755796,
   1.738524,
   1.729447,
   2.005807,
   1.990864,
   1.982398,
   1.97891,
   2.030781,
   2.010406,
   1.99869,
   2.275078,
   2.259278,
   2.250159,
   2.24423,
   2.299881,
   2.277933,
   2.265874,
   2.542594,
   2.526163,
   2.51589,
   2.509329,
   2.568998,
   2.545476,
   2.531991,
   2.808799,
   2.789691,
   2.77935,
   2.773134,
   2.831429,
   2.806464,
   2.793979,
   3.065209,
   3.048576,
   3.039316,
   3.033078,
   3.088877,
   3.066314,
   3.054185,
   -2.965215,
   -2.979062,
   -2.987111,
   -2.992682,
   -2.93912,
   -2.959055,
   -2.970356,
   -2.712232,
   -2.725761,
   -2.731512,
   -2.73522,
   -2.688812,
   -2.705364,
   -2.71542,
   -2.467135,
   -2.475093,
   -2.479344,
   -2.481296,
   -2.441441,
   -2.455092,
   -2.461689,
   -2.226312,
   -2.226264,
   -2.226545,
   -2.227509,
   -2.194716,
   -2.202863,
   -2.207935,
   -1.983954,
   -1.978856,
   -1.975919,
   -1.973985,
   -1.950163,
   -1.952971,
   -1.95537,
   -1.737303,
   -1.730068,
   -1.72289,
   -1.720066,
   -1.702001,
   -1.704286,
   -1.701922,
   1.722114,
   1.716324,
   1.712347,
   1.708217,
   1.752607,
   1.737857,
   1.729113,
   1.99586,
   1.987813,
   1.982087,
   1.978396,
   2.027167,
   2.008981,
   1.998843,
   2.271539,
   2.257919,
   2.25053,
   2.246156,
   2.299181,
   2.279158,
   2.267396,
   2.546841,
   2.52534,
   2.515693,
   2.510586,
   2.568116,
   2.54447,
   2.531893,
   2.806234,
   2.787806,
   2.777651,
   2.772854,
   2.830413,
   2.807298,
   2.793414,
   3.061911,
   3.048534,
   3.038222,
   3.034172,
   3.085545,
   3.065243,
   3.052956,
   -2.970078,
   -2.979718,
   -2.987785,
   -2.992433,
   -2.942572,
   -2.9605,
   -2.971565,
   -2.716174,
   -2.72656,
   -2.731698,
   -2.73428,
   -2.691567,
   -2.707261,
   -2.715737,
   -2.465894,
   -2.474668,
   -2.478136,
   -2.479934,
   -2.441154,
   -2.454161,
   -2.461196,
   -2.228307,
   -2.228323,
   -2.228502,
   -2.22831,
   -2.194967,
   -2.20354,
   -2.208583,
   -1.984632,
   -1.980144,
   -1.97654,
   -1.975002,
   -1.948422,
   -1.952795,
   -1.955948,
   -1.73752,
   -1.731216,
   -1.724185,
   -1.718883,
   -1.703089,
   -1.702786,
   -1.703042};
   Double_t phidxPXFn_fy208[336] = {
   -109.7547,
   -179.9575,
   -208.6032,
   -304.061,
   -44.27713,
   -55.84688,
   -55.4529,
   -29.92066,
   -24.98701,
   -34.87588,
   -43.18771,
   -15.48808,
   -23.26769,
   -38.00266,
   -23.37449,
   -5.293497,
   -19.67779,
   -25.03028,
   1.287928,
   -5.881662,
   1.261888,
   -20.40017,
   20.93172,
   5.494735,
   43.03989,
   22.58026,
   23.90943,
   22.63433,
   8.659862,
   34.94519,
   31.37087,
   29.37864,
   24.86554,
   41.98559,
   33.01632,
   -2.659338,
   37.07003,
   38.20868,
   47.37232,
   34.49326,
   54.61907,
   57.25498,
   -51.17012,
   -65.58109,
   -64.37144,
   -59.10361,
   -56.26541,
   -63.39861,
   -67.00681,
   -52.82544,
   -68.93672,
   -74.37242,
   -72.8634,
   -154.8314,
   -7.689751,
   20.52339,
   -40.02999,
   -43.77163,
   -57.99418,
   -68.44415,
   -43.00507,
   -52.7304,
   -73.10343,
   -49.52462,
   -54.23098,
   -60.41877,
   -66.98679,
   -37.58831,
   -51.89808,
   -65.76039,
   -38.283,
   -33.89858,
   -45.14966,
   -61.55935,
   -30.77611,
   -25.87987,
   -41.01945,
   -25.94795,
   -16.47067,
   -30.24849,
   -43.29143,
   -19.021,
   -24.8406,
   -33.4395,
   -90.89635,
   -83.19662,
   -91.37569,
   -100.6413,
   -76.72617,
   -85.07744,
   -101.1908,
   -79.85634,
   -38.52981,
   -68.02512,
   -79.45314,
   -37.25292,
   -60.52036,
   -69.37771,
   -99.52959,
   -29.13875,
   -28.50681,
   -45.24501,
   -52.94239,
   -28.1789,
   -30.82861,
   -213.3791,
   -26.73713,
   -1.952679,
   -9.867387,
   -48.33015,
   -16.38781,
   7.987085,
   -33.37556,
   -0.1581077,
   2.618375,
   19.78431,
   11.30436,
   9.022767,
   17.99037,
   -134.5681,
   -10.68221,
   24.88348,
   31.87761,
   -32.77737,
   31.82147,
   46.50639,
   -43.82043,
   -38.19632,
   -74.03954,
   -73.62833,
   -37.76912,
   -71.84515,
   -82.19031,
   20.73503,
   -58.25401,
   -85.98844,
   -71.87749,
   -44.27211,
   -84.68687,
   -92.25887,
   69.57905,
   -53.62264,
   -69.18177,
   -92.91633,
   -40.15891,
   -93.69865,
   -97.52805,
   3.629014,
   -38.52758,
   -87.91045,
   -94.52796,
   -14.15973,
   -94.07667,
   -87.55135,
   -11.80059,
   -63.7879,
   -79.88205,
   -82.44485,
   -22.15459,
   -86.64525,
   -80.42403,
   -30.27951,
   -60.31214,
   -66.58488,
   -94.37038,
   -41.18656,
   -84.49401,
   -97.68821,
   -308.9761,
   -306.4142,
   -312.5889,
   -304.3885,
   -296.4453,
   -300.602,
   -306.8793,
   -312.6126,
   -322.0361,
   -315.3784,
   -301.4157,
   -300.7793,
   -313.1862,
   -299.9639,
   -274.4652,
   -300.7893,
   -299.7509,
   -304.4467,
   -294.6597,
   -302.7518,
   -300.7968,
   -325.0141,
   -316.5579,
   -304.1058,
   -307.2292,
   -296.8315,
   -309.094,
   -298.0598,
   -301.0846,
   -295.3771,
   -286.3742,
   -335.1796,
   -299.3781,
   -289.4861,
   -308.2925,
   -315.1058,
   -283.6494,
   -260.3593,
   -316.6139,
   -291.4876,
   -286.8499,
   -293.0092,
   -263.0019,
   -268.2647,
   -261.8354,
   -299.8764,
   -268.6916,
   -270.2292,
   -245.2985,
   -256.1966,
   -263.048,
   -251.6408,
   -284.9532,
   -280.7981,
   -271.5105,
   -235.2004,
   -254.2345,
   -247.5124,
   -258.4838,
   -260.7157,
   -226.8962,
   -235.0321,
   -175.624,
   -268.5883,
   -277.0579,
   -260.2304,
   -244.9955,
   -279.5762,
   -270.4309,
   -239.0165,
   -244.0757,
   -283.1764,
   -256.0143,
   -244.2187,
   -287.0154,
   -271.2532,
   -245.0116,
   -260.0462,
   -255.2364,
   -248.5308,
   -252.2739,
   -258.181,
   -254.0483,
   -256.4368,
   -355.346,
   -341.3518,
   -342.7353,
   -347.0124,
   -331.8753,
   -330.6215,
   -342.8054,
   -307.8798,
   -332.4846,
   -350.7739,
   -354.2398,
   -323.8057,
   -331.8587,
   -356.3964,
   -306.5168,
   -333.6607,
   -322.7847,
   -325.1062,
   -332.394,
   -311.5131,
   -314.4082,
   -318.9265,
   -321.7726,
   -331.2052,
   -287.7083,
   -339.7007,
   -297.7579,
   -298.1364,
   -310.4897,
   -299.3086,
   -290.4955,
   -266.3244,
   -288.9621,
   -265.3202,
   -286.9399,
   5.594185,
   -284.5652,
   -279.0608,
   -274.7791,
   -278.8727,
   -265.8585,
   -268.6801,
   -374.755,
   -360.2156,
   -348.7802,
   -336.6355,
   -268.825,
   -207.0651,
   -232.5837,
   -274.957,
   -340.0296,
   -363.7821,
   -286.6764,
   -401.093,
   -351.7438,
   -358.3968,
   -186.2178,
   -344.8773,
   -382.4229,
   -370.2354,
   -297.8416,
   -267.6693,
   -237.3287,
   -199.505,
   -347.3177,
   -281.7719,
   -290.6795,
   -266.3005,
   -317.0813,
   -258.6613,
   -189.2864,
   -275.5295,
   -277.9031,
   -308.0895,
   -194.8593,
   -320.4232,
   -257.8336,
   -296.004,
   -278.1628,
   -282.0424,
   -260.6414,
   -251.1374,
   -282.4395,
   -269.4284};
   graph = new TGraph(336,phidxPXFn_fx208,phidxPXFn_fy208);
   graph->SetName("phidxPXFn");
   graph->SetTitle("PXF at z<0;#phi /rad;#Deltax /#mum");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(6);
   multigraph->Add(graph,"P");
   multigraph->Draw("A");
   multigraph->GetXaxis()->SetTitle("#phi /rad");
   multigraph->GetXaxis()->SetLabelFont(132);
   multigraph->GetXaxis()->SetLabelSize(0.08);
   multigraph->GetXaxis()->SetTitleSize(0.08);
   multigraph->GetYaxis()->SetTitle("#Deltax /#mum");
   multigraph->GetYaxis()->SetLabelFont(132);
   multigraph->GetYaxis()->SetLabelSize(0.08);
   multigraph->GetYaxis()->SetTitleSize(0.08);
   multigraph->GetYaxis()->SetTitleFont(42);
   c_phi_vs_dx_PXF_1->Modified();
   c_phi_vs_dx_PXF_1->cd();
   c_phi_vs_dx_PXF_1->SetSelected(c_phi_vs_dx_PXF_1);
}