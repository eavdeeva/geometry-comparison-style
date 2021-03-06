#include "TCanvas.h"
#include "TColor.h"
#include "TGraph.h"
#include "TMultiGraph.h"
#include "TAxis.h"
#include "TText.h"
#include "TLatex.h"
#include "TkAlStyle.cc"
#include "SetDifferentTextSettings.C"

void r_vs_dr_PXF_1()
{
   TkAlStyle::set(PRELIMINARY);

   const Double_t myMarkerSize = 1.0;

//=========Macro generated from canvas: c_r_vs_dr_PXF_1/r vs. dr at PXF level
//=========  (Mon Jul  6 19:49:37 2015) by ROOT version6.02/05
   TCanvas *c_r_vs_dr_PXF_1 = new TCanvas("c_r_vs_dr_PXF_1", "r vs. dr at PXF level"/*,0,0,3508,2480*/);
   c_r_vs_dr_PXF_1->Range(0,0,1,1);
   c_r_vs_dr_PXF_1->SetFillColor(0);
   c_r_vs_dr_PXF_1->SetBorderMode(0);
   c_r_vs_dr_PXF_1->SetBorderSize(2);
   c_r_vs_dr_PXF_1->SetTickx(1);
   c_r_vs_dr_PXF_1->SetTicky(1);
   c_r_vs_dr_PXF_1->SetLeftMargin(0.18);
   c_r_vs_dr_PXF_1->SetRightMargin(0.05);
   c_r_vs_dr_PXF_1->SetBottomMargin(0.16);
   c_r_vs_dr_PXF_1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("r_vs_dr_PXF_1");
   multigraph->SetTitle(";r /cm;#Deltar /#mum");
   
   Double_t rdrPXFp_fx15[336] = {
   6.106401,
   8.563364,
   11.43401,
   13.90111,
   7.251857,
   10.18789,
   13.11604,
   5.982313,
   8.451392,
   11.31779,
   13.79458,
   7.14822,
   10.0769,
   13.00568,
   5.876385,
   8.356972,
   11.2238,
   13.70129,
   7.051064,
   9.990301,
   12.92379,
   5.817294,
   8.280292,
   11.14038,
   13.61471,
   6.977606,
   9.907657,
   12.84206,
   5.759933,
   8.228557,
   11.09613,
   13.56359,
   6.943403,
   9.87075,
   12.80046,
   5.754254,
   8.22997,
   11.09063,
   13.56243,
   6.944298,
   9.873786,
   12.79802,
   6.692895,
   9.153741,
   12.02981,
   14.49222,
   7.855189,
   10.78746,
   13.71762,
   6.623472,
   9.084364,
   11.95498,
   14.43635,
   7.79897,
   10.72546,
   13.66182,
   6.549788,
   9.017433,
   11.87457,
   14.3494,
   7.72685,
   10.65698,
   13.58635,
   6.454005,
   8.921894,
   11.78555,
   14.25144,
   7.613702,
   10.54158,
   13.4715,
   6.348019,
   8.816017,
   11.69283,
   14.15677,
   7.493212,
   10.42033,
   13.35568,
   6.213303,
   8.67462,
   11.54013,
   14.00932,
   7.378524,
   10.30706,
   13.23215,
   6.082343,
   8.549484,
   11.40962,
   13.87092,
   7.246112,
   10.16292,
   13.09463,
   5.975424,
   8.435238,
   11.29476,
   13.76677,
   7.121896,
   10.04554,
   12.97947,
   5.867922,
   8.330791,
   11.20286,
   13.66574,
   7.024712,
   9.96374,
   12.89054,
   5.776233,
   8.238491,
   11.11639,
   13.60596,
   6.953769,
   9.873045,
   12.80716,
   5.745403,
   8.208947,
   11.07963,
   13.56271,
   6.915414,
   9.851241,
   12.77191,
   5.723717,
   8.213117,
   11.08478,
   13.54397,
   6.909966,
   9.843103,
   12.76847,
   6.6993,
   9.160823,
   12.03088,
   14.51344,
   7.873457,
   10.80234,
   13.7315,
   6.6358,
   9.101232,
   11.97367,
   14.44251,
   7.812913,
   10.74683,
   13.66723,
   6.547237,
   9.012671,
   11.88271,
   14.35989,
   7.722469,
   10.65754,
   13.58543,
   6.467738,
   8.922847,
   11.78781,
   14.25177,
   7.616088,
   10.5314,
   13.46402,
   6.325484,
   8.798816,
   11.65857,
   14.12336,
   7.499458,
   10.42446,
   13.35138,
   6.193932,
   8.66192,
   11.52488,
   13.98813,
   7.363963,
   10.29515,
   13.21634,
   5.852403,
   8.328551,
   11.19268,
   13.67221,
   7.042376,
   9.972835,
   12.89859,
   5.933785,
   8.388553,
   11.25711,
   13.75584,
   7.122422,
   10.05882,
   12.97951,
   6.027087,
   8.502177,
   11.37663,
   13.83459,
   7.237107,
   10.15332,
   13.08506,
   6.135626,
   8.614366,
   11.48796,
   13.95046,
   7.338465,
   10.25681,
   13.18462,
   6.252396,
   8.7333,
   11.597,
   14.07544,
   7.456499,
   10.3768,
   13.29442,
   6.378231,
   8.844039,
   11.71822,
   14.1944,
   7.578437,
   10.49614,
   13.43414,
   6.471997,
   8.943899,
   11.81668,
   14.29861,
   7.68961,
   10.61216,
   13.53092,
   6.575089,
   9.060486,
   11.93002,
   14.39889,
   7.776586,
   10.70387,
   13.63515,
   6.645149,
   9.113589,
   11.98539,
   14.46824,
   7.825317,
   10.7478,
   13.67759,
   6.698929,
   9.16975,
   12.04232,
   14.5097,
   7.85635,
   10.77776,
   13.71474,
   6.713793,
   9.175447,
   12.05279,
   14.52155,
   7.892173,
   10.82422,
   13.7499,
   6.684303,
   9.167706,
   12.03627,
   14.50524,
   7.865965,
   10.7957,
   13.71681,
   5.804626,
   8.295797,
   11.17136,
   13.63895,
   7.018672,
   9.946726,
   12.86819,
   5.909084,
   8.379898,
   11.24628,
   13.72541,
   7.100149,
   10.01755,
   12.94286,
   6.002181,
   8.471779,
   11.3406,
   13.82072,
   7.21245,
   10.13009,
   13.06135,
   6.126344,
   8.598741,
   11.45599,
   13.94933,
   7.313463,
   10.23971,
   13.16042,
   6.256428,
   8.722215,
   11.58859,
   14.06345,
   7.439849,
   10.3593,
   13.28372,
   6.375036,
   8.836886,
   11.71193,
   14.18812,
   7.560885,
   10.48145,
   13.41186,
   6.480867,
   8.959374,
   11.82967,
   14.31648,
   7.678825,
   10.60947,
   13.53926,
   6.576517,
   9.047961,
   11.9189,
   14.40415,
   7.773538,
   10.69928,
   13.63344,
   6.648513,
   9.116757,
   12.00297,
   14.47463,
   7.831963,
   10.7564,
   13.68716,
   6.69787,
   9.172207,
   12.04711,
   14.52133,
   7.88098,
   10.81161,
   13.73324,
   6.709542,
   9.179335,
   12.06113,
   14.53843,
   7.899485,
   10.82994,
   13.76492,
   6.703675,
   9.168508,
   12.04334,
   14.51259,
   7.872284,
   10.79655,
   13.72922};
   Double_t rdrPXFp_fy15[336] = {
   -173.8585,
   -168.2283,
   -182.0404,
   -181.9111,
   -167.4649,
   -169.4084,
   -192.3893,
   -157.4151,
   -151.3491,
   -150.1819,
   -128.7667,
   -139.5442,
   -158.5631,
   -153.2977,
   -112.7486,
   -122.5923,
   -150.1668,
   -101.4418,
   -107.0321,
   -119.1298,
   -118.0129,
   -78.02402,
   -77.79842,
   -108.3295,
   -43.19092,
   -67.47466,
   -102.9515,
   -97.03371,
   -19.92798,
   -31.53419,
   -55.93726,
   -21.35859,
   -32.62429,
   -40.7903,
   -45.89198,
   -9.791154,
   9.119967,
   -9.99957,
   4.132749,
   3.235336,
   1.305726,
   -27.85463,
   -41.12379,
   -41.27604,
   -28.46895,
   -73.61821,
   -47.29285,
   -40.91631,
   -36.36501,
   -90.34822,
   -80.67421,
   -84.42236,
   -86.61971,
   -91.26941,
   -79.95473,
   -130.8299,
   -122.8874,
   -87.32482,
   -121.7229,
   -199.7477,
   -104.231,
   -109.2135,
   -128.1133,
   -162.3725,
   -139.0905,
   -145.7391,
   -139.6281,
   -154.6359,
   -164.7152,
   -154.0882,
   -145.6155,
   -168.2446,
   -157.6031,
   -85.34521,
   -154.6739,
   -156.5063,
   -141.5901,
   -185.5219,
   -156.1233,
   -176.6014,
   -169.7708,
   -153.5522,
   -173.9998,
   -207.2019,
   -112.2619,
   -116.5526,
   -147.3612,
   -141.8741,
   -114.2318,
   -141.3153,
   -150.027,
   -126.0887,
   -90.65429,
   -127.4247,
   -140.3961,
   -86.16689,
   -119.4936,
   -129.3629,
   -78.16324,
   -70.53374,
   -92.85004,
   -110.7105,
   -67.40345,
   -83.09625,
   -97.1601,
   240.4998,
   -39.58593,
   -51.37254,
   -126.9593,
   -33.2207,
   -40.97911,
   -62.77937,
   18.07193,
   -20.78418,
   -11.36707,
   -139.5665,
   4.654867,
   -17.14461,
   -43.95,
   462.3173,
   -2.80019,
   21.78201,
   -9.522903,
   13.03144,
   -10.72041,
   -13.27684,
   -91.95066,
   -117.1627,
   -72.35909,
   -61.17556,
   -111.4329,
   -92.6081,
   -85.86539,
   -139.6737,
   -170.0247,
   -130.7295,
   -224.326,
   -144.3604,
   -112.8027,
   -128.0203,
   -141.2428,
   -122.7242,
   -104.3406,
   -121.8431,
   -118.6144,
   -132.2382,
   -130.9915,
   -138.2373,
   -143.5659,
   -173.3455,
   -178.4703,
   -107.987,
   -180.8685,
   -185.1328,
   -151.5496,
   -134.3158,
   -159.9984,
   -208.2184,
   -109.6454,
   -162.1585,
   -192.2911,
   -176.9651,
   -158.7309,
   -171.324,
   -227.7211,
   -142.1729,
   -157.1672,
   -182.0441,
   53.72735,
   54.90171,
   34.62496,
   12.37332,
   52.57906,
   38.6159,
   29.15981,
   52.24456,
   35.5818,
   23.22349,
   58.89892,
   27.59569,
   22.08561,
   41.09744,
   62.41735,
   44.48327,
   33.57953,
   62.23752,
   46.73149,
   42.38232,
   30.35213,
   51.11937,
   27.07225,
   35.28822,
   45.06741,
   28.33777,
   34.24047,
   36.43291,
   34.78216,
   26.68874,
   14.17487,
   47.71983,
   16.05088,
   14.45141,
   11.51112,
   7.199676,
   23.16976,
   -8.309722,
   11.97892,
   3.245975,
   1.951384,
   -5.205595,
   -13.12749,
   -0.8043238,
   -10.00395,
   -6.918408,
   -12.08002,
   -5.171017,
   -3.386575,
   -1.4145,
   -9.39847,
   -10.10582,
   27.85024,
   -25.59993,
   -8.57093,
   -22.40227,
   -42.6118,
   -20.20905,
   -22.9898,
   -20.03738,
   -39.59074,
   -37.57041,
   -25.65011,
   -39.12092,
   -44.73719,
   -42.48043,
   -57.45401,
   -49.34991,
   -38.43633,
   -39.67376,
   -33.03909,
   -15.12687,
   -20.77782,
   -99.81397,
   -29.78046,
   -21.99922,
   -80.08864,
   -50.47044,
   -12.96649,
   -19.73442,
   -78.26907,
   -48.33701,
   -4.542609,
   -56.90495,
   5.378826,
   15.12615,
   26.09496,
   -0.131377,
   16.60587,
   28.45283,
   -1.220179,
   61.14641,
   2.735958,
   -21.95669,
   -27.42202,
   20.43623,
   -12.47998,
   -36.06691,
   30.00013,
   11.84781,
   -15.98889,
   -56.71672,
   18.79015,
   -8.554493,
   -48.94735,
   16.37879,
   7.385787,
   -22.33726,
   -59.15707,
   0.5400996,
   -1.928354,
   -49.79641,
   53.41652,
   -7.016038,
   -25.47178,
   -14.00471,
   0.8990882,
   -29.93527,
   -39.5004,
   -59.6126,
   2.879641,
   -16.07368,
   -35.10313,
   -5.487442,
   -22.96254,
   -30.53704,
   -16.40028,
   -13.73505,
   -31.67362,
   -21.79816,
   -5.180115,
   -23.43589,
   -35.83607,
   -13.59937,
   -11.66345,
   -7.916754,
   -45.48249,
   -12.37914,
   -15.30025,
   -28.37986,
   -60.21947,
   -19.98636,
   0.6562396,
   -5.635466,
   -24.29108,
   -28.28398,
   -19.37774,
   -18.76174,
   -27.37117,
   -24.48612,
   -17.4447,
   -2.729607,
   -38.74067,
   -38.40882,
   -120.4656,
   -15.15881,
   -37.28208,
   17.98068,
   -1.565678,
   -40.89248,
   -24.00968,
   -68.00942,
   -20.46274,
   -34.59311,
   -59.51208,
   -70.45026,
   -37.50679,
   -39.16422};
   TGraph *graph = new TGraph(336,rdrPXFp_fx15,rdrPXFp_fy15);
   graph->SetName("rdrPXFp");
   graph->SetTitle("PXF at z>=0;r /cm;#Deltar /#mum");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(6);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(myMarkerSize);
   multigraph->Add(graph,"P");
   
   Double_t rdrPXFn_fx16[336] = {
   6.090453,
   8.553477,
   11.42126,
   13.88496,
   7.249039,
   10.16592,
   13.09396,
   5.988542,
   8.448001,
   11.31387,
   13.79256,
   7.127621,
   10.02826,
   12.98209,
   5.880697,
   8.34839,
   11.21427,
   13.68651,
   7.051502,
   9.972571,
   12.90246,
   5.80092,
   8.27234,
   11.15047,
   13.63327,
   6.976398,
   9.906002,
   12.83427,
   5.758087,
   8.236194,
   11.1055,
   13.57837,
   6.946638,
   9.87816,
   12.80596,
   5.760213,
   8.226215,
   11.09703,
   13.5756,
   6.929648,
   9.859048,
   12.7805,
   6.690555,
   9.170884,
   12.02925,
   14.51861,
   7.863796,
   10.7922,
   13.72163,
   6.636504,
   9.112585,
   11.98391,
   14.44567,
   7.806471,
   10.74068,
   13.67221,
   6.553238,
   9.015395,
   11.88867,
   14.35616,
   7.728478,
   10.64651,
   13.57028,
   6.454512,
   8.922779,
   11.79433,
   14.26714,
   7.631309,
   10.55385,
   13.47066,
   6.335814,
   8.801602,
   11.66941,
   14.14223,
   7.498204,
   10.42383,
   13.35109,
   6.208178,
   8.676886,
   11.54592,
   14.01066,
   7.383637,
   10.30521,
   13.2446,
   6.108884,
   8.567852,
   11.43937,
   13.91628,
   7.276234,
   10.20838,
   13.1316,
   5.975992,
   8.455853,
   11.31473,
   13.79123,
   7.167102,
   10.08212,
   13.00989,
   5.868651,
   8.350986,
   11.22389,
   13.70169,
   7.05091,
   9.984129,
   12.9154,
   5.785697,
   8.274575,
   11.14489,
   13.61835,
   6.976818,
   9.901198,
   12.83978,
   5.737956,
   8.221829,
   11.09973,
   13.57665,
   6.919716,
   9.847572,
   12.77284,
   5.740235,
   8.197845,
   11.06512,
   13.54575,
   6.910231,
   9.840356,
   12.77064,
   6.683514,
   9.170507,
   12.04061,
   14.50574,
   7.864486,
   10.79445,
   13.72187,
   6.633679,
   9.117276,
   11.97726,
   14.45651,
   7.815224,
   10.73468,
   13.67731,
   6.554899,
   9.0247,
   11.89847,
   14.37244,
   7.744459,
   10.67562,
   13.59823,
   6.475046,
   8.952916,
   11.8121,
   14.29264,
   7.647736,
   10.57038,
   13.49802,
   6.357856,
   8.816862,
   11.68812,
   14.1579,
   7.503355,
   10.42841,
   13.36453,
   6.227358,
   8.687447,
   11.56175,
   14.04066,
   7.399182,
   10.31361,
   13.25159,
   5.81735,
   8.285975,
   11.16177,
   13.62815,
   6.9959,
   9.939433,
   12.86548,
   5.906643,
   8.367805,
   11.23968,
   13.71886,
   7.085088,
   10.01176,
   12.95296,
   5.9958,
   8.475327,
   11.34516,
   13.81367,
   7.197817,
   10.12215,
   13.03958,
   6.12625,
   8.596668,
   11.46357,
   13.94145,
   7.296258,
   10.22207,
   13.14822,
   6.238758,
   8.708011,
   11.57576,
   14.06267,
   7.447596,
   10.36608,
   13.2866,
   6.365893,
   8.821733,
   11.70296,
   14.17441,
   7.564085,
   10.4842,
   13.4192,
   6.476633,
   8.958203,
   11.83431,
   14.30604,
   7.687935,
   10.61218,
   13.53401,
   6.58053,
   9.043353,
   11.92049,
   14.40596,
   7.77615,
   10.70331,
   13.62797,
   6.662018,
   9.118082,
   11.98705,
   14.47104,
   7.825353,
   10.75431,
   13.6897,
   6.683803,
   9.181643,
   12.0423,
   14.53075,
   7.879209,
   10.80725,
   13.73401,
   6.695301,
   9.192938,
   12.06702,
   14.53972,
   7.903214,
   10.8295,
   13.76846,
   6.709623,
   9.159146,
   12.03408,
   14.51725,
   7.880524,
   10.80729,
   13.74153,
   5.826606,
   8.298418,
   11.17202,
   13.65139,
   7.024576,
   9.945642,
   12.87836,
   5.909302,
   8.379614,
   11.24827,
   13.73502,
   7.112674,
   10.02377,
   12.96002,
   6.007825,
   8.455112,
   11.3417,
   13.81301,
   7.209785,
   10.12138,
   13.05715,
   6.119111,
   8.591737,
   11.45979,
   13.94295,
   7.324453,
   10.24658,
   13.16744,
   6.256484,
   8.710257,
   11.57471,
   14.05518,
   7.439933,
   10.3625,
   13.29156,
   6.327653,
   8.812431,
   11.6869,
   14.15976,
   7.558739,
   10.47803,
   13.4098,
   6.47803,
   8.951065,
   11.82415,
   14.30397,
   7.673491,
   10.5921,
   13.51522,
   6.56377,
   9.03582,
   11.90557,
   14.37729,
   7.756217,
   10.68625,
   13.6134,
   6.637022,
   9.108074,
   11.97892,
   14.4509,
   7.82767,
   10.75191,
   13.68551,
   6.671311,
   9.161541,
   12.0237,
   14.48633,
   7.882243,
   10.80782,
   13.74436,
   6.688168,
   9.168689,
   12.04034,
   14.50945,
   7.896389,
   10.823,
   13.7501,
   6.694081,
   9.154744,
   12.02198,
   14.50744,
   7.880587,
   10.79385,
   13.73415};
   Double_t rdrPXFn_fy16[336] = {
   -115.9937,
   -199.4001,
   -228.4314,
   -319.11,
   -63.1433,
   -77.88931,
   -78.35739,
   -87.38721,
   -91.27217,
   -103.5049,
   -115.0969,
   -89.05672,
   -97.22427,
   -115.7153,
   -123.8146,
   -124.826,
   -141.4886,
   -150.258,
   -119.1933,
   -137.1685,
   -130.2087,
   -150.6087,
   -142.3883,
   -159.258,
   -109.9651,
   -132.4324,
   -156.1794,
   -155.0714,
   -163.6783,
   -133.0232,
   -163.8136,
   -185.9698,
   -174.6324,
   -163.6719,
   -198.1451,
   -190.4205,
   -179.6008,
   -188.206,
   -212.4373,
   -172.0972,
   -173.483,
   -204.2023,
   178.8107,
   125.6558,
   149.5124,
   206.4627,
   146.3824,
   139.6118,
   131.406,
   153.3479,
   150.6028,
   111.7885,
   95.24426,
   124.5134,
   240.1675,
   282.9092,
   136.5803,
   150.8833,
   111.1754,
   96.82406,
   133.4869,
   130.6654,
   89.24302,
   69.63476,
   72.12235,
   68.60552,
   59.87815,
   89.33436,
   81.24513,
   62.22064,
   47.02215,
   60.54922,
   43.99526,
   25.70473,
   54.6647,
   65.70562,
   46.93119,
   13.95058,
   22.6952,
   6.457978,
   -6.701698,
   17.98355,
   8.785631,
   -1.045204,
   -94.51808,
   -92.28318,
   -105.2007,
   -117.2755,
   -86.27373,
   -101.3147,
   -121.3965,
   -91.75249,
   -87.51537,
   -129.3777,
   -142.6357,
   -75.97206,
   -125.1222,
   -136.0079,
   -171.0878,
   -117.4774,
   -138.0659,
   -157.9939,
   -125.2589,
   -144.2863,
   -151.2287,
   -255.206,
   -121.7444,
   -133.5822,
   -154.6702,
   -130.5555,
   -150.3411,
   -135.7296,
   -128.5847,
   -132.6978,
   -158.2959,
   -144.6364,
   -104.2859,
   -153.4682,
   -159.1038,
   -49.84445,
   -134.9309,
   -153.166,
   -173.8887,
   -94.92913,
   -143.7288,
   -158.4373,
   164.2745,
   174.8299,
   91.37351,
   149.9459,
   203.6758,
   66.87775,
   83.27386,
   108.8983,
   91.97143,
   72.43831,
   114.1533,
   104.8302,
   65.33109,
   59.40973,
   89.17096,
   70.63589,
   70.63319,
   32.15337,
   74.06548,
   43.67017,
   55.38694,
   51.04462,
   63.85896,
   20.30551,
   21.73288,
   61.58641,
   7.225418,
   27.22796,
   56.25225,
   -1.379139,
   -6.750434,
   -5.726612,
   36.65432,
   -19.84695,
   -2.129817,
   -30.98948,
   -28.86685,
   -34.51254,
   -63.27309,
   -18.00762,
   -55.07351,
   -69.22313,
   -453.9038,
   -426.8325,
   -428.9865,
   -451.9723,
   -446.1649,
   -436.4727,
   -463.2982,
   -280.4763,
   -310.4285,
   -324.5518,
   -351.4674,
   -288.6707,
   -299.5569,
   -330.2682,
   -177.9044,
   -185.4178,
   -201.8093,
   -189.2958,
   -151.8424,
   -174.8241,
   -184.9806,
   15.46406,
   -18.00676,
   -41.34657,
   -40.83601,
   -2.542113,
   -17.6668,
   -35.25761,
   152.6263,
   114.9271,
   91.45112,
   137.5351,
   146.2491,
   114.7358,
   124.2997,
   282.0317,
   239.9023,
   210.1443,
   262.111,
   268.2472,
   251.215,
   249.8818,
   342.022,
   344.6404,
   334.7863,
   371.54,
   359.4832,
   355.0955,
   325.7523,
   425.0398,
   435.6278,
   425.149,
   464.5329,
   456.9914,
   452.9458,
   410.4407,
   495.3664,
   486.3538,
   501.5449,
   505.6788,
   340.255,
   347.9825,
   403.2083,
   551.9427,
   545.2789,
   526.6595,
   518.2646,
   546.0625,
   528.7205,
   492.5056,
   504.3978,
   540.993,
   512.7745,
   495.571,
   548.3505,
   522.2057,
   475.7788,
   478.3461,
   483.1741,
   429.9645,
   501.1088,
   485.5806,
   439.0433,
   430.8952,
   -283.1339,
   -409.092,
   -416.1031,
   -404.0583,
   -383.4251,
   -407.2781,
   -402.2028,
   -248.9984,
   -286.6983,
   -295.0019,
   -284.445,
   -234.9163,
   -272.8809,
   -276.9421,
   -164.9189,
   -124.2577,
   -165.3398,
   -168.3876,
   -95.43156,
   -146.1325,
   -176.0866,
   3.223628,
   7.867178,
   -3.638863,
   -72.32247,
   65.86848,
   -13.39598,
   -40.34617,
   133.9669,
   125.1127,
   103.6439,
   69.83466,
   143.5028,
   97.49174,
   105.9977,
   -42.71726,
   242.2945,
   229.16,
   222.1194,
   257.0394,
   230.7512,
   226.2153,
   420.0888,
   415.1811,
   404.3689,
   381.4839,
   349.666,
   285.718,
   310.0954,
   501.1822,
   495.4195,
   471.4341,
   440.9185,
   485.1871,
   464.909,
   470.214,
   557.6902,
   538.7833,
   502.6327,
   495.4157,
   531.4361,
   487.8386,
   461.1927,
   575.3851,
   649.9109,
   545.7467,
   568.066,
   550.3399,
   595.6921,
   506.6971,
   494.8064,
   590.553,
   495.7263,
   618.2996,
   499.1544,
   635.8079,
   458.7135,
   555.8433,
   528.7991,
   506.9406,
   439.0708,
   505.1177,
   559.6124,
   385.0189};
   graph = new TGraph(336,rdrPXFn_fx16,rdrPXFn_fy16);
   graph->SetName("rdrPXFn");
   graph->SetTitle("PXF at z<0;r /cm;#Deltar /#mum");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(6);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(myMarkerSize);
   multigraph->Add(graph,"P");
   multigraph->Draw("A");

   TText* textRed = new TText();
   SetTextRed(textRed);
   TString titRed = textRed->GetTitle();
   textRed->SetText(0.63,0.87,titRed);
   textRed->Draw("same");

   TText* textBlack = new TText();
   SetTextBlack(textBlack);
   TString titBlack = textBlack->GetTitle();
   textBlack->SetText(0.77,0.87,titBlack);
   textBlack->Draw("same");


   TkAlStyle::drawStandardTitle();

   TText* text1 = new TText(0.23,0.86,"FPIX");
   SetTextAll(text1);
   text1->Draw("same");

   TText* text_z2 = new TText(0.20,0.07,"");
   SetTextAlignmentLineUp(text_z2);
   text_z2->Draw("same");
   TText* text_z1 = new TText(0.20,0.02,"");
   SetTextAlignmentLineDown(text_z1);
   text_z1->Draw("same");

   multigraph->GetXaxis()->SetTitle("r [cm]");
   //multigraph->GetXaxis()->SetLabelFont(132);
   //multigraph->GetXaxis()->SetLabelSize(0.08);
   //multigraph->GetXaxis()->SetTitleSize(0.08);
   multigraph->GetYaxis()->SetTitle("#Deltar [#mum]");
   //multigraph->GetYaxis()->SetLabelFont(132);
   //multigraph->GetYaxis()->SetLabelSize(0.08);
   //multigraph->GetYaxis()->SetTitleSize(0.08);
   //multigraph->GetYaxis()->SetTitleFont(42);
   c_r_vs_dr_PXF_1->Modified();
   c_r_vs_dr_PXF_1->cd();
   c_r_vs_dr_PXF_1->SetSelected(c_r_vs_dr_PXF_1);
   c_r_vs_dr_PXF_1->SaveAs("r_vs_dr_PXF_1.png");
   c_r_vs_dr_PXF_1->SaveAs("r_vs_dr_PXF_1.pdf");
}
