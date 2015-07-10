void phi_vs_dy_PXB_1()
{
//=========Macro generated from canvas: c_phi_vs_dy_PXB_1/phi vs. dy at PXB level
//=========  (Mon Jul  6 19:49:41 2015) by ROOT version6.02/05
   TCanvas *c_phi_vs_dy_PXB_1 = new TCanvas("c_phi_vs_dy_PXB_1", "phi vs. dy at PXB level",0,0,3508,2480);
   c_phi_vs_dy_PXB_1->Range(0,0,1,1);
   c_phi_vs_dy_PXB_1->SetFillColor(0);
   c_phi_vs_dy_PXB_1->SetBorderMode(0);
   c_phi_vs_dy_PXB_1->SetBorderSize(2);
   c_phi_vs_dy_PXB_1->SetTickx(1);
   c_phi_vs_dy_PXB_1->SetTicky(1);
   c_phi_vs_dy_PXB_1->SetLeftMargin(0.18);
   c_phi_vs_dy_PXB_1->SetRightMargin(0.05);
   c_phi_vs_dy_PXB_1->SetBottomMargin(0.16);
   c_phi_vs_dy_PXB_1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("phi_vs_dy_PXB_1");
   multigraph->SetTitle("PXB;#phi /rad;#Deltay /#mum");
   
   Double_t phidyPXBp_fx229[384] = {
   0.1399743,
   0.1391777,
   0.1410298,
   0.1386822,
   0.4887377,
   0.4914247,
   0.4910614,
   0.4940408,
   0.8616887,
   0.8638305,
   0.8611163,
   0.8604243,
   1.221992,
   1.220494,
   1.218319,
   1.219357,
   1.489858,
   1.493982,
   1.492009,
   1.496993,
   -1.493899,
   -1.492745,
   -1.491511,
   -1.493447,
   -1.246794,
   -1.248348,
   -1.250908,
   -1.249602,
   -0.9141306,
   -0.9136644,
   -0.9133969,
   -0.9125322,
   -0.5653455,
   -0.5633923,
   -0.5631633,
   -0.5625502,
   -0.2239832,
   -0.2220305,
   -0.2203927,
   -0.2211608,
   0.07908306,
   0.0797918,
   0.07949503,
   0.079368,
   0.2924597,
   0.2938677,
   0.2937936,
   0.2939614,
   0.5067659,
   0.5077255,
   0.5078931,
   0.5078778,
   0.7186792,
   0.7199592,
   0.719963,
   0.7220691,
   0.9351264,
   0.9357814,
   0.9363914,
   0.9377799,
   1.148902,
   1.149828,
   1.151578,
   1.149898,
   1.366723,
   1.365771,
   1.365512,
   1.365285,
   1.525421,
   1.523751,
   1.524274,
   1.525319,
   -1.524901,
   -1.524908,
   -1.525896,
   -1.525936,
   -1.376604,
   -1.376214,
   -1.376192,
   -1.375381,
   -1.171721,
   -1.169929,
   -1.17177,
   -1.17228,
   -0.9654227,
   -0.9644425,
   -0.9647557,
   -0.9654574,
   -0.7575619,
   -0.7566179,
   -0.7587671,
   -0.7597107,
   -0.54754,
   -0.5475883,
   -0.5483315,
   -0.548426,
   -0.3422222,
   -0.341186,
   -0.3420765,
   -0.3422934,
   -0.1296327,
   -0.1290071,
   -0.1295772,
   -0.1283944,
   0.05698055,
   0.05763031,
   0.05637043,
   0.05822333,
   0.2071399,
   0.2081499,
   0.2080788,
   0.2083156,
   0.3623789,
   0.3621701,
   0.3624206,
   0.3622331,
   0.5118482,
   0.5109686,
   0.5109877,
   0.5113187,
   0.6646067,
   0.664494,
   0.6648301,
   0.6655437,
   0.8142258,
   0.8142548,
   0.8150514,
   0.8151566,
   0.9685884,
   0.9691567,
   0.9697807,
   0.9685067,
   1.11935,
   1.118896,
   1.119287,
   1.120107,
   1.27171,
   1.27245,
   1.272688,
   1.2732,
   1.424867,
   1.424223,
   1.425473,
   1.42488,
   1.534455,
   1.534987,
   1.536878,
   1.53605,
   -1.53749,
   -1.537198,
   -1.538371,
   -1.536938,
   -1.429584,
   -1.430355,
   -1.431013,
   -1.431753,
   -1.283013,
   -1.284385,
   -1.284304,
   -1.283951,
   -1.134787,
   -1.135756,
   -1.136218,
   -1.138349,
   -0.9878361,
   -0.9873453,
   -0.9873807,
   -0.9876237,
   -0.8400979,
   -0.8400316,
   -0.8405091,
   -0.8414383,
   -0.6910982,
   -0.6908487,
   -0.6917589,
   -0.6914618,
   -0.5416304,
   -0.5413526,
   -0.542211,
   -0.5421299,
   -0.3941425,
   -0.3937779,
   -0.3928682,
   -0.3931624,
   -0.2435163,
   -0.2439339,
   -0.2440461,
   -0.2443075,
   -0.09464122,
   -0.09376766,
   -0.09253496,
   -0.09431621,
   1.713524,
   1.713537,
   1.709614,
   1.70994,
   1.968099,
   1.967667,
   1.968294,
   1.967142,
   2.322739,
   2.324281,
   2.324392,
   2.325832,
   2.668195,
   2.668848,
   2.667922,
   2.668117,
   3.013838,
   3.012637,
   3.012572,
   3.013575,
   -2.936911,
   -2.936237,
   -2.937031,
   -2.936722,
   -2.605341,
   -2.603517,
   -2.603342,
   -2.604321,
   -2.268214,
   -2.271882,
   -2.268934,
   -2.27,
   -1.941673,
   -1.945175,
   -1.942609,
   -1.943339,
   -1.690581,
   -1.692045,
   -1.690553,
   -1.687858,
   1.652225,
   1.65382,
   1.65432,
   1.655218,
   1.804426,
   1.80556,
   1.805438,
   1.807038,
   2.020924,
   2.0224,
   2.023121,
   2.022556,
   2.228983,
   2.230474,
   2.231232,
   2.231903,
   2.442689,
   2.44204,
   2.441743,
   2.442319,
   2.649601,
   2.650163,
   2.65064,
   2.650715,
   2.858282,
   2.858271,
   2.858734,
   2.857705,
   3.06232,
   3.062145,
   3.062944,
   3.063083,
   -3.014144,
   -3.014498,
   -3.015543,
   -3.014975,
   -2.811839,
   -2.812629,
   -2.813321,
   -2.812698,
   -2.606936,
   -2.606341,
   -2.607968,
   -2.608602,
   -2.404577,
   -2.405094,
   -2.405046,
   -2.404886,
   -2.201682,
   -2.202574,
   -2.202893,
   -2.202888,
   -1.999073,
   -1.999334,
   -1.999237,
   -2.00124,
   -1.792848,
   -1.795354,
   -1.795984,
   -1.796612,
   -1.645712,
   -1.646503,
   -1.645102,
   -1.648411,
   1.632967,
   1.633048,
   1.633326,
   1.632952,
   1.741457,
   1.742041,
   1.742214,
   1.743351,
   1.893183,
   1.89344,
   1.893891,
   1.894556,
   2.043315,
   2.04523,
   2.044977,
   2.04615,
   2.195199,
   2.195031,
   2.194494,
   2.195228,
   2.344562,
   2.345707,
   2.345165,
   2.345291,
   2.494977,
   2.493972,
   2.49422,
   2.494212,
   2.643025,
   2.641911,
   2.641846,
   2.642738,
   2.790399,
   2.789376,
   2.790807,
   2.790238,
   2.938438,
   2.937266,
   2.939228,
   2.938201,
   3.084276,
   3.085144,
   3.08533,
   3.08605,
   -3.052085,
   -3.052615,
   -3.051846,
   -3.051724,
   -2.904079,
   -2.904156,
   -2.904321,
   -2.904276,
   -2.757271,
   -2.758547,
   -2.757829,
   -2.758703,
   -2.612355,
   -2.61299,
   -2.612851,
   -2.612759,
   -2.466445,
   -2.466432,
   -2.467057,
   -2.467001,
   -2.322078,
   -2.321584,
   -2.321531,
   -2.321783,
   -2.173479,
   -2.173232,
   -2.174022,
   -2.174928,
   -2.028793,
   -2.030143,
   -2.029264,
   -2.031065,
   -1.881429,
   -1.880778,
   -1.881575,
   -1.882501,
   -1.736417,
   -1.736918,
   -1.736835,
   -1.736903,
   -1.630513,
   -1.630682,
   -1.630046,
   -1.630559};
   Double_t phidyPXBp_fy229[384] = {
   3431.763,
   3491.462,
   3586.824,
   3493.97,
   3476.071,
   3483.026,
   3490.194,
   3517.832,
   3484.551,
   3504.831,
   3504.197,
   3521.659,
   3550.083,
   3499.856,
   3503.148,
   3532.665,
   3541.817,
   3566.816,
   3587.766,
   3541.403,
   3616.376,
   3588.648,
   3632.849,
   3567.375,
   3501.068,
   3497.28,
   3501.485,
   3530.266,
   3477.492,
   3500.898,
   3506.23,
   3539.214,
   3447.067,
   3498.385,
   3462.665,
   3486.004,
   3462.065,
   3470.491,
   3475.845,
   3505.724,
   3543.873,
   3556.274,
   3521.924,
   3451.909,
   3261.048,
   3393.974,
   3390.079,
   3435.069,
   3488.82,
   3508.3,
   3461.451,
   3476.203,
   3414.985,
   3379.707,
   3370.672,
   3486.676,
   3479.343,
   3477.138,
   3491.945,
   3537.167,
   3457.244,
   3500.541,
   3521.425,
   3528.716,
   3493.071,
   3518.499,
   3537.859,
   3558.183,
   3570.365,
   3591.344,
   3599.447,
   3634.742,
   3523.445,
   3562.721,
   3546.331,
   3627.847,
   3501.255,
   3512.173,
   3522.798,
   3523.355,
   3466.616,
   3525.707,
   3518.292,
   3478.312,
   3436.246,
   3450.469,
   3462.275,
   3478.249,
   3433.796,
   3471.723,
   3464.194,
   3477.454,
   3426.446,
   3437.729,
   3450.31,
   3461.609,
   3415.419,
   3411.187,
   3400.883,
   3465.04,
   3410.777,
   3426.403,
   3405.331,
   3533.363,
   3408.25,
   3415.366,
   3250.12,
   3429.783,
   3377.07,
   3487.688,
   3412.116,
   3434.784,
   3440.552,
   3420.725,
   3497.193,
   3414.268,
   3514.349,
   3378.74,
   3476.329,
   3333.149,
   3409.958,
   3412.231,
   3434.171,
   3457.5,
   3459.168,
   3468.956,
   3434.581,
   3462.727,
   3419.446,
   3461.717,
   3447.082,
   3443.728,
   3469.854,
   3482.205,
   3495.209,
   3499.562,
   3477.992,
   3516.256,
   3485.981,
   3537.284,
   3555.615,
   3551.29,
   3543.073,
   3539.645,
   3572.486,
   3574.858,
   3577.418,
   3543.05,
   3572.813,
   3568.985,
   3574.031,
   3336.324,
   3514.168,
   3510.663,
   3505.326,
   3485.359,
   3484.776,
   3482.836,
   3490.335,
   3503.625,
   3433.654,
   3440.963,
   3451.697,
   3467.456,
   3400.443,
   3439.214,
   3447.304,
   3458.515,
   3396.088,
   3411.7,
   3422.975,
   3436.268,
   3393.357,
   3411.947,
   3433.319,
   3447.379,
   3401.986,
   3427.319,
   3362.551,
   3428.791,
   3380.335,
   3410.378,
   3420.902,
   3428.34,
   3500.664,
   3440.499,
   3431.316,
   3413.904,
   3331.592,
   3198.476,
   3452.599,
   3321.558,
   2936.167,
   2938.942,
   2928.935,
   2936.85,
   2975.708,
   2970.257,
   2967.566,
   2983.252,
   2981.813,
   2971.92,
   2993.861,
   3000.708,
   3011.44,
   3017.722,
   3024.019,
   3036.939,
   2998.732,
   3004.362,
   3011.106,
   3017.881,
   3004.218,
   3014.082,
   3027.006,
   3032.268,
   2989.786,
   3002.006,
   3006.732,
   3012.47,
   2987.62,
   2991.367,
   2995.211,
   3001.053,
   2974.111,
   2985.068,
   2967.497,
   2978.698,
   2966.601,
   2971.41,
   2959.106,
   2953.795,
   2909.391,
   2914.58,
   2926.944,
   2983.012,
   2951.415,
   2962.038,
   2973.491,
   2985.305,
   2971.501,
   2981.324,
   2982.535,
   2991.757,
   3006.484,
   3015.721,
   3020.364,
   3023.153,
   3013.276,
   3018.637,
   3017.458,
   3031.405,
   3032.367,
   3037.856,
   3040.321,
   3047.463,
   3025.227,
   3032.285,
   3037.051,
   3040.802,
   3036.331,
   3043.815,
   3049.554,
   3053.63,
   3022.299,
   3031.366,
   3041.115,
   3051.523,
   3020.553,
   3030.815,
   3042.599,
   3049.976,
   3010.33,
   3019.657,
   3029.037,
   3039.083,
   3005.75,
   3013.606,
   3022.407,
   3029.231,
   3000.723,
   3006.631,
   3011.671,
   3015.537,
   2985.914,
   2990.395,
   3005.095,
   2997.955,
   2968.327,
   2979.098,
   2989.483,
   2976.503,
   2931.539,
   2934.947,
   2951.255,
   2983.103,
   2933.906,
   2923.049,
   2943.977,
   2961.873,
   2964.346,
   2970.777,
   2987.413,
   3003.513,
   2980.775,
   2989.39,
   3004.395,
   3006.471,
   3023.744,
   3029.071,
   3042.875,
   3027.267,
   3033.809,
   3039.055,
   3042.21,
   3027.666,
   3050.679,
   3055.823,
   3069.241,
   3057.328,
   3052.657,
   3056.591,
   3061.521,
   3055.188,
   3064.04,
   3073.21,
   3069.81,
   3061.739,
   3057.185,
   3066.35,
   3068.713,
   3066.411,
   3061.292,
   3071.659,
   3074.344,
   3081.376,
   3056.108,
   3063.649,
   3068.771,
   3070.69,
   3054.939,
   3067.138,
   3070.984,
   3079.986,
   3047.532,
   3056.892,
   3063.53,
   3069.594,
   3041.547,
   3050.076,
   3057.825,
   3067.696,
   3025.716,
   3039.067,
   3047.43,
   3055.092,
   3014.15,
   3023.436,
   3036.77,
   3044.228,
   3006.086,
   3015.474,
   3023.052,
   3042.754,
   2990.779,
   3003.476,
   3006.542,
   3021.889,
   2972.707,
   2999.205,
   2998.942,
   3029.341,
   2945.776,
   2957.416,
   2979.144,
   3004.353,
   2925.637,
   2944.114,
   2962.102,
   2997.602,
   2883.136,
   2886.926,
   2924.638,
   2977.877};
   TGraph *graph = new TGraph(384,phidyPXBp_fx229,phidyPXBp_fy229);
   graph->SetName("phidyPXBp");
   graph->SetTitle("PXB at z>=0;#phi /rad;#Deltay /#mum");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(6);
   multigraph->Add(graph,"P");
   
   Double_t phidyPXBn_fx230[384] = {
   0.1342633,
   0.1368944,
   0.1377243,
   0.1382603,
   0.4891599,
   0.4881614,
   0.4901413,
   0.4891748,
   0.8558584,
   0.8580484,
   0.8580521,
   0.8590024,
   1.218226,
   1.217118,
   1.216936,
   1.218674,
   1.491935,
   1.490222,
   1.491225,
   1.490802,
   -1.49779,
   -1.498178,
   -1.495222,
   -1.494893,
   -1.250464,
   -1.249071,
   -1.249259,
   -1.250217,
   -0.9130836,
   -0.9136742,
   -0.9136889,
   -0.9130875,
   -0.5643464,
   -0.564753,
   -0.5652241,
   -0.5659431,
   -0.2222409,
   -0.2232385,
   -0.2219953,
   -0.221313,
   0.07728155,
   0.07777407,
   0.0784426,
   0.0791092,
   0.2929462,
   0.2925035,
   0.2915714,
   0.2929906,
   0.5027888,
   0.5062335,
   0.5063275,
   0.5071834,
   0.7153226,
   0.7172098,
   0.7173777,
   0.7177539,
   0.9311596,
   0.9326013,
   0.9332436,
   0.9344013,
   1.145907,
   1.147915,
   1.147063,
   1.148975,
   1.36289,
   1.364016,
   1.364714,
   1.365052,
   1.521232,
   1.520656,
   1.524932,
   1.523962,
   -1.524792,
   -1.524007,
   -1.525416,
   -1.526271,
   -1.374859,
   -1.375658,
   -1.376104,
   -1.376418,
   -1.170018,
   -1.170403,
   -1.169808,
   -1.170323,
   -0.9641701,
   -0.9642563,
   -0.9652564,
   -0.965198,
   -0.7563691,
   -0.7567699,
   -0.7582921,
   -0.7582045,
   -0.5470568,
   -0.5470988,
   -0.5479596,
   -0.5470064,
   -0.3432128,
   -0.3413939,
   -0.3412541,
   -0.3405749,
   -0.1305412,
   -0.1308935,
   -0.1305073,
   -0.1305288,
   0.05466821,
   0.05533461,
   0.05536929,
   0.05610896,
   0.2068577,
   0.2087099,
   0.2081602,
   0.2073187,
   0.3594028,
   0.3598696,
   0.3613403,
   0.3608299,
   0.5100049,
   0.5108218,
   0.5114371,
   0.5120432,
   0.66225,
   0.6629518,
   0.6630234,
   0.66402,
   0.812494,
   0.812402,
   0.8131236,
   0.8131081,
   0.9670641,
   0.9674108,
   0.9678736,
   0.9673824,
   1.117649,
   1.117782,
   1.118489,
   1.118833,
   1.270638,
   1.270571,
   1.271692,
   1.271281,
   1.422609,
   1.423036,
   1.422868,
   1.424379,
   1.534755,
   1.535268,
   1.534247,
   1.535464,
   -1.534279,
   -1.53538,
   -1.535276,
   -1.536419,
   -1.430302,
   -1.429648,
   -1.428546,
   -1.429575,
   -1.281638,
   -1.281682,
   -1.281635,
   -1.282847,
   -1.13232,
   -1.133153,
   -1.133143,
   -1.13385,
   -0.9865154,
   -0.9860513,
   -0.9864112,
   -0.9865556,
   -0.8397707,
   -0.8404347,
   -0.8407934,
   -0.8402509,
   -0.6897812,
   -0.6898038,
   -0.6904444,
   -0.6901197,
   -0.5428998,
   -0.5425285,
   -0.5430606,
   -0.5434911,
   -0.3939573,
   -0.392659,
   -0.3928734,
   -0.3939208,
   -0.2452778,
   -0.2451814,
   -0.2443585,
   -0.2443548,
   -0.09440686,
   -0.09359328,
   -0.09367909,
   -0.09244803,
   1.703496,
   1.707219,
   1.707395,
   1.706543,
   1.960917,
   1.96463,
   1.962549,
   1.963828,
   2.321402,
   2.32087,
   2.326941,
   2.321624,
   2.665894,
   2.666684,
   2.666721,
   2.666887,
   3.012042,
   3.013469,
   3.013789,
   3.01348,
   -2.937051,
   -2.936084,
   -2.937586,
   -2.937916,
   -2.603012,
   -2.603104,
   -2.603875,
   -2.6044,
   -2.270048,
   -2.26633,
   -2.26804,
   -2.2679,
   -1.940769,
   -1.940109,
   -1.940851,
   -1.939897,
   -1.68657,
   -1.687184,
   -1.690989,
   -1.69154,
   1.648808,
   1.649944,
   1.65067,
   1.651856,
   1.803214,
   1.802508,
   1.800892,
   1.802992,
   2.020041,
   2.021576,
   2.020311,
   2.021853,
   2.229394,
   2.228285,
   2.228265,
   2.22951,
   2.440288,
   2.441165,
   2.441084,
   2.442986,
   2.649203,
   2.648062,
   2.649894,
   2.650592,
   2.857672,
   2.858631,
   2.859761,
   2.85963,
   3.061287,
   3.06185,
   3.062278,
   3.061535,
   -3.014611,
   -3.013612,
   -3.014517,
   -3.015226,
   -2.811581,
   -2.811837,
   -2.812409,
   -2.812457,
   -2.606032,
   -2.605545,
   -2.604675,
   -2.605226,
   -2.404941,
   -2.404263,
   -2.404837,
   -2.404983,
   -2.199977,
   -2.198467,
   -2.199544,
   -2.199726,
   -1.997126,
   -1.999378,
   -1.99825,
   -1.99903,
   -1.792549,
   -1.794441,
   -1.79433,
   -1.793838,
   -1.639153,
   -1.640544,
   -1.641695,
   -1.643734,
   1.632038,
   1.63101,
   1.631436,
   1.632183,
   1.739496,
   1.739687,
   1.739863,
   1.740328,
   1.892089,
   1.892078,
   1.892702,
   1.893167,
   2.041811,
   2.043069,
   2.043454,
   2.043549,
   2.193876,
   2.195201,
   2.195306,
   2.194758,
   2.343797,
   2.343581,
   2.344071,
   2.34354,
   2.494413,
   2.493123,
   2.494213,
   2.494388,
   2.641673,
   2.640774,
   2.641298,
   2.642274,
   2.789469,
   2.78961,
   2.789578,
   2.788929,
   2.93737,
   2.93822,
   2.937117,
   2.937272,
   3.084453,
   3.085244,
   3.084746,
   3.084769,
   -3.050969,
   -3.052279,
   -3.052286,
   -3.053272,
   -2.903594,
   -2.903594,
   -2.904403,
   -2.903273,
   -2.75743,
   -2.75801,
   -2.758729,
   -2.75923,
   -2.612157,
   -2.611924,
   -2.611628,
   -2.612018,
   -2.465549,
   -2.464734,
   -2.466409,
   -2.466079,
   -2.320199,
   -2.320079,
   -2.320388,
   -2.321385,
   -2.172024,
   -2.172376,
   -2.172812,
   -2.173053,
   -2.027551,
   -2.027901,
   -2.028135,
   -2.029041,
   -1.880347,
   -1.880751,
   -1.881131,
   -1.881538,
   -1.733503,
   -1.735523,
   -1.735075,
   -1.734134,
   -1.626316,
   -1.62811,
   -1.62803,
   -1.629369};
   Double_t phidyPXBn_fy230[384] = {
   3357.959,
   3376.922,
   3412.204,
   3434.326,
   3382.506,
   3397.439,
   3431.75,
   3454.694,
   3402.038,
   3425.933,
   3455.819,
   3477.061,
   3425.496,
   3447.167,
   3487.883,
   3507.739,
   3485.43,
   3498.213,
   3524.666,
   3541.302,
   3497.162,
   3534.965,
   3522.001,
   3519.737,
   3414.339,
   3439.6,
   3468.905,
   3485.895,
   3412.156,
   3419.807,
   3440.424,
   3458.615,
   3366.024,
   3387.194,
   3414.717,
   3433.284,
   3367.808,
   3390.777,
   3418.567,
   3440.099,
   3337.39,
   3363.156,
   3383.221,
   3403.75,
   3346.606,
   3370.916,
   3391.706,
   3410.222,
   3348.545,
   3376.062,
   3395.508,
   3414.944,
   3373.113,
   3501.684,
   3377.109,
   3394.407,
   3390.226,
   3397.846,
   3417.457,
   3437.28,
   3410.981,
   3426.501,
   3438.616,
   3454.71,
   3416.746,
   3440.188,
   3459.104,
   3485.82,
   3463,
   3485.824,
   3506.798,
   3495.148,
   3508.185,
   3481.521,
   3501.912,
   3523.13,
   3419.891,
   3444.647,
   3466.294,
   3485.886,
   3381.314,
   3421.571,
   3436.135,
   3456,
   3353.15,
   3391.163,
   3404.028,
   3421.364,
   3360.162,
   3381.399,
   3399.848,
   3413.594,
   3345.21,
   3364.217,
   3383.409,
   3405.102,
   3341.633,
   3363.931,
   3385.398,
   3403.625,
   3337.641,
   3361.993,
   3381.157,
   3400.975,
   3249.936,
   3272.657,
   3258.776,
   3325.064,
   3333.817,
   3349.989,
   3370.292,
   3383.729,
   3345.639,
   3366.667,
   3382.677,
   3279.284,
   3344.513,
   3368.764,
   3389.195,
   3406.333,
   3368.213,
   3390.944,
   3410.218,
   3431.675,
   3379.672,
   3384.921,
   3409.155,
   3427.874,
   3393.862,
   3417.459,
   3426.228,
   3445.373,
   3417.375,
   3284.971,
   3467.107,
   3418.094,
   3434.81,
   3462.062,
   3473.748,
   3488.172,
   3439.518,
   3464.308,
   3499.98,
   3510.245,
   3468.141,
   3514.185,
   3531.624,
   3548.613,
   3489.875,
   3524.363,
   3559.36,
   3558.208,
   3430.629,
   3456.63,
   3490.853,
   3501.319,
   3403.631,
   3434.174,
   3452.648,
   3466.471,
   3380.786,
   3385.76,
   3402.347,
   3422.256,
   3370.406,
   3380.004,
   3392.329,
   3403.749,
   3358.477,
   3360.475,
   3371.169,
   3382.726,
   3340.431,
   3357.343,
   3373.68,
   3382.521,
   3338.449,
   3352.316,
   3365.896,
   3376.523,
   3339.362,
   3347.443,
   3362.718,
   3377.089,
   3337.386,
   3347.835,
   3406.174,
   3431.412,
   3328.505,
   3350.028,
   3366.152,
   3380.332,
   2891.623,
   2893.306,
   2912.016,
   2938.406,
   2948.15,
   2947.905,
   2949.047,
   2966.55,
   2970.751,
   2952.276,
   2961.435,
   2974.547,
   2990.228,
   2982.774,
   2989.322,
   2997.788,
   2988.875,
   2976.81,
   2979.875,
   2993.188,
   2975.63,
   2977.021,
   2983.679,
   2993.171,
   2970.2,
   2973.142,
   2975.434,
   2983.602,
   2957.014,
   2965.815,
   2965.553,
   2973.688,
   2964.593,
   2969.513,
   2957.555,
   2965.335,
   2937.299,
   2950.306,
   2945.359,
   2944.843,
   2920.338,
   2899.633,
   2896.608,
   2900.813,
   2941.357,
   2936.56,
   2934.222,
   2941.941,
   2958.097,
   2952.398,
   2957.362,
   2965.368,
   2974.461,
   2980.615,
   2987.174,
   2996.596,
   2982,
   2984.059,
   2994.297,
   3004.341,
   2986.158,
   2997.218,
   3007.601,
   3016.479,
   2995.421,
   2996.571,
   3007.567,
   3016.93,
   2998.39,
   3003.85,
   3010.519,
   3020.645,
   2993.348,
   2999.707,
   3007.217,
   3015.962,
   2985.953,
   2992.383,
   2998.385,
   3009.737,
   2985.995,
   2992.106,
   2999.716,
   3007.256,
   2976.736,
   2978.629,
   2981.662,
   2991.994,
   2968.616,
   2975.516,
   2983.483,
   2994.484,
   2749.674,
   2964.068,
   2968.86,
   2972.406,
   2956.181,
   2946.86,
   2952.627,
   2963.565,
   2929.189,
   2907.065,
   2925.765,
   2919.479,
   2905.025,
   2904.22,
   2896.794,
   2924.026,
   2940.209,
   2938.203,
   2944.69,
   2955.329,
   2953.027,
   2955.148,
   2964.613,
   2974.297,
   2966.442,
   2987.388,
   2996.224,
   3012.373,
   2968.148,
   2991.475,
   3013.756,
   3029.052,
   2984.773,
   3010.684,
   3029.192,
   3041.847,
   3002.454,
   3012.825,
   3032.032,
   3045.358,
   3010.977,
   3024.833,
   3039.055,
   3050.646,
   3012.366,
   3027.236,
   3040.456,
   3052.72,
   3021.468,
   3028.693,
   3039.303,
   3047.84,
   3025.813,
   3030.216,
   3038.781,
   3049.282,
   3022.438,
   3025.519,
   3035.448,
   3043.298,
   3018.135,
   3026.394,
   3033.707,
   3043.622,
   3008.964,
   3016.288,
   3025.438,
   3030.289,
   3007.026,
   3013.827,
   3017.136,
   3026.861,
   2995.558,
   2994.675,
   2997.947,
   3004.424,
   3000.988,
   2991.585,
   2993.896,
   2997.481,
   2973.693,
   2969.921,
   2978.212,
   2977.128,
   2976.251,
   2972.429,
   2967.266,
   2966.657,
   2949.679,
   2948.082,
   2937.301,
   2938.249,
   2934.625,
   2921.018,
   2928.366,
   2922.878,
   2932.264,
   2911.277,
   2884.931,
   2881.177};
   graph = new TGraph(384,phidyPXBn_fx230,phidyPXBn_fy230);
   graph->SetName("phidyPXBn");
   graph->SetTitle("PXB at z<0;#phi /rad;#Deltay /#mum");
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
   multigraph->GetYaxis()->SetTitle("#Deltay /#mum");
   multigraph->GetYaxis()->SetLabelFont(132);
   multigraph->GetYaxis()->SetLabelSize(0.08);
   multigraph->GetYaxis()->SetTitleSize(0.08);
   multigraph->GetYaxis()->SetTitleFont(42);
   c_phi_vs_dy_PXB_1->Modified();
   c_phi_vs_dy_PXB_1->cd();
   c_phi_vs_dy_PXB_1->SetSelected(c_phi_vs_dy_PXB_1);
}