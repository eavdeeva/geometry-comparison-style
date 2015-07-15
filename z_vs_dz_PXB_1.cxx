#include "TCanvas.h"
#include "TColor.h"
#include "TGraph.h"
#include "TMultiGraph.h"
#include "TAxis.h"
#include "TText.h"
#include "TLatex.h"
#include "TkAlStyle.cc"
#include "SetDifferentTextSettings.C"

void z_vs_dz_PXB_1()
{
   TkAlStyle::set(PRELIMINARY);

   const Double_t myMarkerSize = 1.0;

//=========Macro generated from canvas: c_z_vs_dz_PXB_1/z vs. dz at PXB level
//=========  (Mon Jul  6 19:49:42 2015) by ROOT version6.02/05
   TCanvas *c_z_vs_dz_PXB_1 = new TCanvas("c_z_vs_dz_PXB_1", "z vs. dz at PXB level"/*,0,0,3508,2480*/);
/*
   c_z_vs_dz_PXB_1->Range(0,0,1,1);
   c_z_vs_dz_PXB_1->SetFillColor(0);
   c_z_vs_dz_PXB_1->SetBorderMode(0);
   c_z_vs_dz_PXB_1->SetBorderSize(2);
   c_z_vs_dz_PXB_1->SetTickx(1);
   c_z_vs_dz_PXB_1->SetTicky(1);
   c_z_vs_dz_PXB_1->SetLeftMargin(0.18);
   c_z_vs_dz_PXB_1->SetRightMargin(0.05);
   c_z_vs_dz_PXB_1->SetBottomMargin(0.16);
   c_z_vs_dz_PXB_1->SetFrameBorderMode(0);
*/

   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("z_vs_dz_PXB_1");
   multigraph->SetTitle(";z /cm;#Deltaz=z_{Al2}-z_{Al1} /#mum");
   
   Double_t zdzPXBp_fx277[384] = {
   2.646289,
   9.337986,
   16.04902,
   22.77117,
   2.666301,
   9.370008,
   16.05782,
   22.78312,
   2.639967,
   9.348424,
   16.04345,
   22.76335,
   2.654287,
   9.354937,
   16.06381,
   22.77334,
   2.640183,
   9.342795,
   16.05619,
   22.74825,
   2.662246,
   9.365382,
   16.068,
   22.76395,
   2.655645,
   9.356251,
   16.06781,
   22.76055,
   2.658139,
   9.369458,
   16.05778,
   22.76626,
   2.632562,
   9.336891,
   16.05177,
   22.76606,
   2.66314,
   9.38756,
   16.06756,
   22.77541,
   2.684032,
   9.378505,
   16.06912,
   22.76409,
   2.680529,
   9.37915,
   16.07843,
   22.78236,
   2.665866,
   9.379652,
   16.06421,
   22.76969,
   2.669742,
   9.37523,
   16.06678,
   22.77011,
   2.682814,
   9.381301,
   16.05668,
   22.77653,
   2.676243,
   9.377932,
   16.08325,
   22.77005,
   2.677175,
   9.37958,
   16.07139,
   22.7571,
   2.678198,
   9.387134,
   16.06691,
   22.77308,
   2.671387,
   9.37948,
   16.07773,
   22.76417,
   2.677313,
   9.38042,
   16.07075,
   22.77,
   2.667456,
   9.373466,
   16.0614,
   22.76471,
   2.668232,
   9.370587,
   16.06914,
   22.76414,
   2.68528,
   9.369059,
   16.06715,
   22.77132,
   2.676961,
   9.373245,
   16.07269,
   22.76466,
   2.678335,
   9.362214,
   16.06124,
   22.76247,
   2.673376,
   9.376987,
   16.08579,
   22.76413,
   2.655041,
   9.364053,
   16.06371,
   22.77002,
   2.668923,
   9.368483,
   16.05953,
   22.76355,
   2.6747,
   9.364873,
   16.05162,
   22.75961,
   2.670413,
   9.35817,
   16.05674,
   22.75191,
   2.663933,
   9.37003,
   16.063,
   22.77283,
   2.661171,
   9.370193,
   16.06854,
   22.76478,
   2.644344,
   9.344816,
   16.0324,
   22.73731,
   2.652459,
   9.37123,
   16.06536,
   22.76168,
   2.632046,
   9.341182,
   16.03093,
   22.72815,
   2.651011,
   9.338195,
   16.05553,
   22.74293,
   2.686675,
   9.364719,
   16.05533,
   22.77307,
   2.665655,
   9.355249,
   16.07576,
   22.77258,
   2.675274,
   9.368411,
   16.06758,
   22.78371,
   2.668067,
   9.351741,
   16.06626,
   22.7613,
   2.666102,
   9.367855,
   16.05532,
   22.75467,
   2.657956,
   9.366828,
   16.07497,
   22.76802,
   2.661044,
   9.349078,
   16.05707,
   22.76278,
   2.652116,
   9.358247,
   16.05252,
   22.75414,
   2.661503,
   9.35045,
   16.04682,
   22.75652,
   2.644923,
   9.35099,
   16.04357,
   22.74172,
   2.656941,
   9.347925,
   16.06151,
   22.74125,
   2.660137,
   9.362606,
   16.07526,
   22.77007,
   2.709722,
   9.405238,
   16.12542,
   22.82746,
   2.690921,
   9.398899,
   16.08719,
   22.7974,
   2.714242,
   9.41662,
   16.09669,
   22.82191,
   2.687824,
   9.394251,
   16.10055,
   22.79224,
   2.705273,
   9.396933,
   16.10412,
   22.79955,
   2.681507,
   9.384789,
   16.07851,
   22.77831,
   2.727161,
   9.417168,
   16.10507,
   22.80409,
   2.669404,
   9.374843,
   16.09933,
   22.78991,
   2.71294,
   9.412154,
   16.11087,
   22.79753,
   2.672462,
   9.386406,
   16.08663,
   22.78089,
   2.701836,
   9.424616,
   16.12029,
   22.80037,
   2.685351,
   9.385593,
   16.08341,
   22.7907,
   2.716794,
   9.406796,
   16.09702,
   22.79594,
   2.71523,
   9.400956,
   16.11155,
   22.80283,
   2.725304,
   9.408076,
   16.10232,
   22.81054,
   2.72277,
   9.417318,
   16.10994,
   22.81475,
   2.717138,
   9.411324,
   16.10046,
   22.79919,
   2.707366,
   9.423172,
   16.11149,
   22.81217,
   2.713292,
   9.412416,
   16.09733,
   22.78848,
   2.696682,
   9.40013,
   16.10313,
   22.79646,
   2.715195,
   9.406778,
   16.09662,
   22.79899,
   2.695388,
   9.405046,
   16.10702,
   22.80318,
   2.716427,
   9.409138,
   16.10125,
   22.80737,
   2.668185,
   9.377719,
   16.07584,
   22.78614,
   2.71144,
   9.410464,
   16.11031,
   22.80454,
   2.717299,
   9.421694,
   16.1102,
   22.8017,
   2.728201,
   9.420522,
   16.11371,
   22.80862,
   2.686871,
   9.395877,
   16.09404,
   22.80604,
   2.708241,
   9.41329,
   16.11413,
   22.79763,
   2.710056,
   9.39516,
   16.09903,
   22.79747,
   2.717434,
   9.405101,
   16.10561,
   22.8077,
   2.701542,
   9.401895,
   16.10313,
   22.80215,
   2.70282,
   9.399329,
   16.10007,
   22.80363,
   2.710497,
   9.405642,
   16.09881,
   22.81888,
   2.716729,
   9.400583,
   16.11595,
   22.82121,
   2.681263,
   9.383019,
   16.08904,
   22.79219,
   2.708876,
   9.411193,
   16.10602,
   22.8128,
   2.717726,
   9.421535,
   16.1156,
   22.81353,
   2.697004,
   9.395789,
   16.09949,
   22.80707,
   2.680578,
   9.366659,
   16.08464,
   22.77106,
   2.693653,
   9.386807,
   16.08928,
   22.79052,
   2.687053,
   9.369891,
   16.08749,
   22.77492,
   2.69806,
   9.395931,
   16.08673,
   22.78516,
   2.687324,
   9.393633,
   16.09178,
   22.79958,
   2.711085,
   9.403598,
   16.10326,
   22.7907,
   2.691136,
   9.383962,
   16.08858,
   22.78955,
   2.693016,
   9.390393,
   16.10811,
   22.80231,
   2.697376,
   9.399783,
   16.10637,
   22.79107};
   Double_t zdzPXBp_fy277[384] = {
   -778.4373,
   -912.807,
   -788.638,
   -612.741,
   -726.8406,
   -726.8514,
   -712.6972,
   -635.2572,
   -764.2101,
   -736.9316,
   -729.0997,
   -678.344,
   -971.7753,
   -842.8898,
   -756.4849,
   -706.033,
   -765.892,
   -787.6036,
   -774.2481,
   -743.1402,
   -792.839,
   -765.7108,
   -800.1641,
   -723.0111,
   -641.8866,
   -745.9289,
   -603.9935,
   -688.1053,
   -722.7464,
   -718.8628,
   -703.5637,
   -684.0494,
   -868.237,
   -824.3138,
   -687.287,
   -632.9832,
   -709.7947,
   -711.9237,
   -689.1859,
   -640.0333,
   -551.0244,
   -473.2197,
   -586.0473,
   -605.5973,
   -606.3215,
   -610.0279,
   -632.5433,
   -505.9149,
   -857.0181,
   -538.233,
   -667.1207,
   -646.8651,
   -809.8524,
   -781.871,
   -744.8781,
   -654.3538,
   -625.9672,
   -660.0486,
   -797.3093,
   -631.8075,
   -740.4677,
   -730.682,
   -729.2039,
   -717.7751,
   -687.8864,
   -751.2608,
   -756.8282,
   -729.9141,
   -775.7825,
   -777.8074,
   -770.9688,
   -678.4636,
   -740.2224,
   -741.1835,
   -728.8129,
   -730.0707,
   -721.1468,
   -716.8407,
   -719.4418,
   -732.2559,
   -840.9233,
   -668.1104,
   -705.132,
   -767.0979,
   -680.634,
   -674.6869,
   -677.1269,
   -667.3606,
   -603.8762,
   -740.3376,
   -668.4025,
   -666.2091,
   -585.3488,
   -656.9135,
   -656.8367,
   -652.6204,
   -607.2164,
   -734.1975,
   -798.7327,
   -667.7171,
   -630.4728,
   -575.4656,
   -624.0922,
   -649.2883,
   -635.0054,
   -602.4334,
   -703.0076,
   -619.3131,
   -618.7499,
   -629.5426,
   -610.5549,
   -648.0919,
   -470.6472,
   -654.2056,
   -874.4006,
   -813.1567,
   -673.6511,
   -853.4164,
   -766.5654,
   -777.3819,
   -704.3136,
   -725.5892,
   -624.6429,
   -661.0169,
   -690.6875,
   -693.6216,
   -609.317,
   -693.2982,
   -738.116,
   -714.559,
   -826.979,
   -818.3374,
   -721.5156,
   -722.8541,
   -723.1586,
   -719.0203,
   -744.366,
   -816.9537,
   -853.6242,
   -781.6007,
   -837.963,
   -859.9847,
   -676.6237,
   -735.6143,
   -781.8699,
   -780.46,
   -791.7244,
   -771.1423,
   -732.0012,
   -731.3353,
   -739.9268,
   -632.0229,
   -713.672,
   -709.8707,
   -716.4882,
   -704.6613,
   -764.8148,
   -800.2561,
   -684.5926,
   -687.0498,
   -666.4315,
   -666.2911,
   -670.4387,
   -665.158,
   -753.0645,
   -652.0182,
   -654.1145,
   -661.7616,
   -630.8647,
   -631.5664,
   -625.9679,
   -629.3444,
   -622.6451,
   -624.5813,
   -626.89,
   -632.1145,
   -543.2191,
   -673.1392,
   -625.2257,
   -623.6238,
   -788.9463,
   -613.4404,
   -621.6205,
   -629.5557,
   -583.2349,
   -632.5193,
   -487.2172,
   -674.3661,
   -760.1473,
   -639.1018,
   -575.7849,
   -623.2973,
   -59.31518,
   -55.84321,
   -22.48124,
   -15.08115,
   -60.43278,
   -60.6995,
   -33.20582,
   -0.05498214,
   -56.88794,
   -61.63388,
   -38.26933,
   8.535486,
   -55.49524,
   -52.49678,
   -32.68811,
   19.00036,
   -51.21246,
   -56.75747,
   -19.99371,
   3.90425,
   -54.63887,
   -52.40803,
   -30.36836,
   7.625848,
   -53.12415,
   -49.0027,
   -15.27106,
   1.322297,
   -50.92008,
   -41.66072,
   -12.12413,
   9.371915,
   -47.44195,
   -38.84277,
   -1.999818,
   12.8025,
   -45.899,
   -38.51289,
   -27.60884,
   27.32617,
   -64.82507,
   -62.87423,
   -52.10761,
   -61.68104,
   -64.07487,
   -63.30627,
   -53.42555,
   -23.25355,
   -62.95919,
   -67.55811,
   -59.42417,
   -34.64694,
   -57.99789,
   -64.35664,
   -57.80623,
   -43.34984,
   -61.01358,
   -61.597,
   -60.11864,
   -32.08157,
   -60.55085,
   -60.8808,
   -56.94323,
   -25.3769,
   -58.51857,
   -62.37019,
   -52.77713,
   -32.38607,
   -55.94482,
   -56.72715,
   -54.05818,
   -29.93092,
   -59.17611,
   -62.09217,
   -51.17258,
   -39.46226,
   -56.69941,
   -58.02386,
   -53.92357,
   -15.45345,
   -55.28531,
   -54.77417,
   -45.57218,
   -24.24849,
   -55.91167,
   -48.88634,
   -47.71433,
   -30.68219,
   -52.79192,
   -48.48719,
   -41.61185,
   -19.69622,
   -52.33043,
   -39.83333,
   -46.10739,
   -6.130443,
   -48.6774,
   -44.1829,
   -39.13816,
   -6.96018,
   -46.93318,
   -36.46481,
   -35.75578,
   -41.07806,
   -68.61012,
   -68.1702,
   -45.40733,
   -31.50205,
   -67.08673,
   -69.19583,
   -44.84908,
   -38.44291,
   -65.65658,
   -67.46186,
   -63.54323,
   -41.45744,
   -66.05481,
   -70.41494,
   -61.27807,
   -67.82285,
   -66.39468,
   -66.92361,
   -65.38704,
   -67.25778,
   -66.90834,
   -68.98748,
   -53.96585,
   -50.34188,
   -64.67326,
   -62.44183,
   -54.86999,
   -52.4281,
   -63.54884,
   -60.17776,
   -64.65946,
   -60.52109,
   -62.17138,
   -63.86478,
   -60.32881,
   -47.94777,
   -61.22712,
   -63.79568,
   -79.47677,
   -42.66209,
   -58.65658,
   -58.17422,
   -69.17927,
   -69.38921,
   -62.56551,
   -62.04327,
   -54.51034,
   -73.98424,
   -57.12892,
   -63.93644,
   -51.9772,
   -53.61624,
   -55.82117,
   -60.43346,
   -46.13771,
   -49.68357,
   -55.68683,
   -56.48792,
   -51.96654,
   -34.81795,
   -56.53862,
   -51.07603,
   -57.70419,
   -29.15054,
   -54.75271,
   -54.22366,
   -45.736,
   -50.61848,
   -54.62277,
   -54.24826,
   -37.67397,
   -28.5764,
   -50.73156,
   -47.47124,
   -44.67535,
   -53.96539,
   -48.5647,
   -44.30317,
   -50.22604,
   -44.54358,
   -47.66586,
   -48.52052,
   -40.42327,
   -53.0686,
   -45.9026,
   -36.48824,
   -37.17184,
   -33.45267};
   TGraph *graph = new TGraph(384,zdzPXBp_fx277,zdzPXBp_fy277);
   graph->SetName("zdzPXBp");
   graph->SetTitle("PXB at z>=0;z /cm;#Deltaz /#mum");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(6);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(myMarkerSize);

   multigraph->Add(graph,"P");
   
   Double_t zdzPXBn_fx278[384] = {
   -24.15461,
   -17.46145,
   -10.74909,
   -4.05123,
   -24.13627,
   -17.44083,
   -10.73194,
   -4.044533,
   -24.15312,
   -17.46052,
   -10.76496,
   -4.065466,
   -24.13299,
   -17.44011,
   -10.7386,
   -4.050313,
   -24.1742,
   -17.46979,
   -10.7605,
   -4.055026,
   -24.15516,
   -17.44901,
   -10.72388,
   -4.042159,
   -24.16432,
   -17.45107,
   -10.74259,
   -4.047327,
   -24.14362,
   -17.44145,
   -10.73536,
   -4.041788,
   -24.15758,
   -17.45065,
   -10.75147,
   -4.049566,
   -24.14251,
   -17.44735,
   -10.73309,
   -4.042559,
   -24.11992,
   -17.4208,
   -10.71863,
   -4.033659,
   -24.1175,
   -17.42258,
   -10.72798,
   -4.017517,
   -24.11665,
   -17.4336,
   -10.72351,
   -4.027956,
   -24.13219,
   -17.43958,
   -10.73686,
   -4.034793,
   -24.13688,
   -17.44051,
   -10.74164,
   -4.051191,
   -24.13647,
   -17.43539,
   -10.72667,
   -4.040546,
   -24.12925,
   -17.43863,
   -10.73531,
   -4.034133,
   -24.13315,
   -17.42757,
   -10.71686,
   -4.012542,
   -24.13897,
   -17.44016,
   -10.72366,
   -4.021469,
   -24.13059,
   -17.42882,
   -10.72307,
   -4.015441,
   -24.12927,
   -17.41038,
   -10.72539,
   -4.033881,
   -24.13457,
   -17.42875,
   -10.73601,
   -4.024287,
   -24.12973,
   -17.42773,
   -10.73274,
   -4.022253,
   -24.12899,
   -17.42172,
   -10.72148,
   -4.018538,
   -24.12441,
   -17.43813,
   -10.7191,
   -4.025394,
   -24.11985,
   -17.42508,
   -10.72906,
   -4.028607,
   -24.13573,
   -17.43929,
   -10.73645,
   -4.034165,
   -24.13197,
   -17.4352,
   -10.73598,
   -4.044492,
   -24.13787,
   -17.43444,
   -10.72645,
   -4.02503,
   -24.13758,
   -17.43385,
   -10.73054,
   -4.035603,
   -24.12507,
   -17.42773,
   -10.73868,
   -4.038673,
   -24.13143,
   -17.42568,
   -10.74927,
   -4.038636,
   -24.15638,
   -17.45266,
   -10.75421,
   -4.0611,
   -24.14238,
   -17.4307,
   -10.72864,
   -4.031725,
   -24.15105,
   -17.45495,
   -10.75551,
   -4.05832,
   -24.14904,
   -17.44742,
   -10.75488,
   -4.051293,
   -24.14539,
   -17.41315,
   -10.72328,
   -4.025099,
   -24.13622,
   -17.42795,
   -10.74237,
   -4.029588,
   -24.12964,
   -17.42756,
   -10.72953,
   -4.032565,
   -24.13087,
   -17.44392,
   -10.72682,
   -4.022453,
   -24.14194,
   -17.44727,
   -10.73961,
   -4.054184,
   -24.13608,
   -17.43702,
   -10.73276,
   -4.03547,
   -24.13451,
   -17.44211,
   -10.73769,
   -4.028227,
   -24.14907,
   -17.44715,
   -10.75323,
   -4.06076,
   -24.1401,
   -17.44833,
   -10.74626,
   -4.041639,
   -24.1295,
   -17.43894,
   -10.74456,
   -4.040605,
   -24.14232,
   -17.44252,
   -10.74146,
   -4.054765,
   -24.12719,
   -17.44416,
   -10.73733,
   -4.026716,
   -24.09715,
   -17.4033,
   -10.68245,
   -4.00017,
   -24.12028,
   -17.41611,
   -10.71628,
   -4.010556,
   -24.1058,
   -17.40062,
   -10.68633,
   -4.004498,
   -24.11602,
   -17.41055,
   -10.71153,
   -4.004717,
   -24.10306,
   -17.40407,
   -10.70944,
   -3.999013,
   -24.12834,
   -17.42934,
   -10.72713,
   -4.024436,
   -24.09241,
   -17.38827,
   -10.68697,
   -3.986749,
   -24.12997,
   -17.41213,
   -10.72095,
   -4.027361,
   -24.09672,
   -17.39344,
   -10.71039,
   -4.005141,
   -24.14203,
   -17.43292,
   -10.72525,
   -4.021425,
   -24.09967,
   -17.40151,
   -10.68847,
   -3.998468,
   -24.11513,
   -17.41756,
   -10.71535,
   -4.011903,
   -24.09345,
   -17.39556,
   -10.69985,
   -4.007737,
   -24.11052,
   -17.39486,
   -10.68564,
   -3.994666,
   -24.08549,
   -17.3838,
   -10.69686,
   -3.976266,
   -24.0977,
   -17.39569,
   -10.68493,
   -3.989543,
   -24.08829,
   -17.39982,
   -10.70538,
   -4.010453,
   -24.09908,
   -17.40288,
   -10.68513,
   -3.98941,
   -24.10147,
   -17.40207,
   -10.71086,
   -4.01322,
   -24.08982,
   -17.39596,
   -10.69133,
   -4.002541,
   -24.09638,
   -17.3895,
   -10.69005,
   -4.008609,
   -24.09256,
   -17.39176,
   -10.70387,
   -4.000671,
   -24.0873,
   -17.38654,
   -10.68727,
   -3.99811,
   -24.11482,
   -17.42791,
   -10.73262,
   -4.025284,
   -24.09684,
   -17.40641,
   -10.69488,
   -3.996149,
   -24.09946,
   -17.41869,
   -10.70976,
   -4.009859,
   -24.08995,
   -17.40581,
   -10.69521,
   -3.999367,
   -24.09362,
   -17.40486,
   -10.69157,
   -4.007199,
   -24.09168,
   -17.39656,
   -10.69719,
   -4.003226,
   -24.09613,
   -17.39194,
   -10.69511,
   -3.993402,
   -24.08849,
   -17.40112,
   -10.69688,
   -3.99081,
   -24.08422,
   -17.39216,
   -10.67937,
   -3.983813,
   -24.0868,
   -17.39448,
   -10.70566,
   -3.993996,
   -24.0932,
   -17.394,
   -10.68083,
   -3.983694,
   -24.09052,
   -17.39179,
   -10.6999,
   -4.00889,
   -24.11383,
   -17.41183,
   -10.71311,
   -4.000909,
   -24.08478,
   -17.39189,
   -10.70408,
   -4.003777,
   -24.09816,
   -17.38329,
   -10.68692,
   -3.983116,
   -24.09421,
   -17.40055,
   -10.69091,
   -4.009061,
   -24.12241,
   -17.4225,
   -10.71301,
   -4.01065,
   -24.09428,
   -17.41403,
   -10.71853,
   -4.006264,
   -24.12044,
   -17.41883,
   -10.72999,
   -4.015109,
   -24.10523,
   -17.41424,
   -10.71046,
   -4.01607,
   -24.11585,
   -17.41655,
   -10.71824,
   -4.012744,
   -24.11211,
   -17.39353,
   -10.71142,
   -3.993314,
   -24.10249,
   -17.4057,
   -10.71925,
   -4.019571,
   -24.11342,
   -17.39694,
   -10.70466,
   -4.014853,
   -24.10775,
   -17.39997,
   -10.6984,
   -3.992731};
   Double_t zdzPXBn_fy278[384] = {
   -782.1629,
   -711.1111,
   -705.4824,
   -708.2705,
   -813.1655,
   -730.8813,
   -726.5218,
   -728.5539,
   -779.4054,
   -739.7506,
   -741.1602,
   -740.6387,
   -820.9823,
   -761.0514,
   -762.4418,
   -763.8135,
   -818.8147,
   -796.7254,
   -780.1781,
   -778.4278,
   -849.847,
   -759.2276,
   -756.849,
   -758.4462,
   -795.5216,
   -763.2655,
   -741.244,
   -739.0259,
   -789.9383,
   -727.7001,
   -725.5244,
   -725.2791,
   -787.9676,
   -715.1244,
   -703.6789,
   -706.2814,
   -832.0369,
   -715.7064,
   -707.7792,
   -711.4134,
   -688.385,
   -657.2178,
   -654.9079,
   -659.5456,
   -675.8297,
   -665.9858,
   -659.195,
   -661.8223,
   -673.0995,
   -675.9202,
   -677.34,
   -681.2814,
   -694.8937,
   -659.0336,
   -592.9233,
   -682.8196,
   -752.6083,
   -710.3023,
   -712.6564,
   -715.1655,
   -775.9397,
   -744.716,
   -732.9738,
   -734.9692,
   -785.8866,
   -767.1364,
   -757.388,
   -759.3676,
   -810.937,
   -779.7094,
   -777.8246,
   -780.6966,
   -783.8502,
   -750.259,
   -740.1604,
   -741.9029,
   -742.8546,
   -733.8898,
   -723.3315,
   -720.8651,
   -734.0734,
   -701.8574,
   -703.9052,
   -702.5332,
   -722.6458,
   -677.0015,
   -680.015,
   -679.913,
   -681.1877,
   -674.9878,
   -671.46,
   -670.9337,
   -679.0074,
   -665.1586,
   -652.2358,
   -654.5433,
   -691.2073,
   -663.3749,
   -654.3129,
   -656.559,
   -680.9225,
   -654.924,
   -646.6917,
   -649.1912,
   -627.6395,
   -626.4724,
   -525.2287,
   -584.5311,
   -619.7388,
   -611.9137,
   -617.7957,
   -621.3112,
   -616.7463,
   -625.5927,
   -624.2067,
   -610.1619,
   -628.1577,
   -636.2418,
   -642.4954,
   -646.3966,
   -640.0267,
   -651.5436,
   -653.3051,
   -657.2745,
   -695.1016,
   -667.0978,
   -678.4632,
   -679.512,
   -707.131,
   -700.1467,
   -690.1112,
   -696.3337,
   -747.0098,
   -635.3871,
   -614.902,
   -509.4375,
   -768.7912,
   -751.7181,
   -740.397,
   -741.5345,
   -781.1714,
   -758.5299,
   -766.5671,
   -764.9439,
   -814.8692,
   -782.0042,
   -781.2278,
   -782.2675,
   -745.4813,
   -740.8096,
   -729.4588,
   -731.7014,
   -731.1848,
   -714.8932,
   -708.4617,
   -711.0803,
   -700.4483,
   -693.8475,
   -689.3254,
   -690.8257,
   -668.2282,
   -668.6861,
   -665.8807,
   -666.324,
   -654.1423,
   -649.2949,
   -648.7313,
   -651.2833,
   -633.5676,
   -639.2892,
   -626.2515,
   -628.5898,
   -632.3891,
   -627.1988,
   -619.8932,
   -620.3057,
   -630.159,
   -604.1396,
   -603.3088,
   -605.7543,
   -625.1415,
   -615.8855,
   -605.9847,
   -607.4087,
   -593.8669,
   -607.998,
   -716.5331,
   -805.1326,
   -612.3959,
   -605.3363,
   -610.0175,
   -608.7983,
   -86.8298,
   -66.44399,
   -55.29491,
   -60.46789,
   -112.1434,
   -77.24256,
   -58.41515,
   -60.47626,
   -149.2733,
   -65.06342,
   -58.25028,
   -57.03707,
   -140.2583,
   -73.65468,
   -57.9197,
   -54.99754,
   -146.1808,
   -77.8988,
   -54.90647,
   -52.38948,
   -157.4895,
   -68.09349,
   -55.14315,
   -53.80366,
   -122.7664,
   -71.32633,
   -56.50667,
   -53.16696,
   -135.3945,
   -68.77016,
   -52.97907,
   -53.0658,
   -115.8479,
   -57.27353,
   -50.80941,
   -50.9479,
   -138.2519,
   -57.30492,
   -43.44304,
   -49.7528,
   -106.631,
   -79.45322,
   -61.94515,
   -65.6849,
   -76.10042,
   -72.03703,
   -62.54571,
   -65.00004,
   -88.31583,
   -66.86069,
   -60.50739,
   -64.30302,
   -91.58152,
   -71.11411,
   -65.12515,
   -63.66103,
   -99.13865,
   -59.9829,
   -60.34549,
   -60.0602,
   -74.9614,
   -63.91726,
   -60.48779,
   -57.72392,
   -88.41759,
   -58.83768,
   -58.57358,
   -58.11879,
   -99.46338,
   -63.39746,
   -59.58483,
   -55.82794,
   -112.2395,
   -54.16256,
   -56.27129,
   -56.73737,
   -87.0277,
   -59.46807,
   -58.77294,
   -55.48426,
   -79.03933,
   -58.82274,
   -57.6322,
   -55.59958,
   -76.03156,
   -59.63018,
   -55.31191,
   -54.17111,
   -93.2753,
   -63.65492,
   -52.46001,
   -54.7645,
   -198.0826,
   -47.17363,
   -49.98728,
   -51.72429,
   -64.90082,
   -53.21205,
   -51.38213,
   -50.58813,
   -55.88958,
   -62.87258,
   -44.47884,
   -47.58943,
   -81.755,
   -74.33441,
   -65.76212,
   -66.47677,
   -83.9616,
   -73.81527,
   -67.39772,
   -70.15729,
   -85.93185,
   -71.646,
   -66.85981,
   -67.6093,
   -69.05296,
   -70.73431,
   -65.47092,
   -68.79229,
   -79.5569,
   -65.19759,
   -66.69519,
   -66.3341,
   -64.24241,
   -70.49832,
   -66.61816,
   -65.48721,
   -68.16308,
   -60.72247,
   -62.70888,
   -62.86712,
   -83.1953,
   -68.39393,
   -60.65209,
   -59.77509,
   -69.11495,
   -62.40354,
   -60.78369,
   -63.00764,
   -63.69439,
   -55.97327,
   -63.89844,
   -59.51322,
   -78.17519,
   -52.77189,
   -56.50207,
   -57.06623,
   -78.0604,
   -67.28397,
   -58.42612,
   -61.21126,
   -78.15675,
   -49.45429,
   -56.16969,
   -56.51999,
   -78.99448,
   -55.47918,
   -56.82641,
   -56.12183,
   -68.86029,
   -53.52751,
   -59.63254,
   -56.07698,
   -69.08483,
   -54.19038,
   -53.89688,
   -55.53166,
   -44.90879,
   -57.44176,
   -52.33212,
   -54.42718,
   -52.83147,
   -57.50594,
   -49.72625,
   -53.69237,
   -54.53255,
   -45.96959,
   -48.78403,
   -50.76198,
   -44.67247,
   -40.80127,
   -49.6622,
   -49.44866,
   -65.43906,
   -46.56035,
   -46.25524,
   -46.44827,
   -54.9183,
   -45.32983,
   -42.83202,
   -46.27171};
   graph = new TGraph(384,zdzPXBn_fx278,zdzPXBn_fy278);
   graph->SetName("zdzPXBn");
   graph->SetTitle("PXB at z<0;z /cm;#Deltaz /#mum");
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

   TText* textRed = new TText(0.40,0.87,"red: z<0,");
   SetTextRed(textRed);
   textRed->Draw("same");

   TText* textBlack = new TText();
   SetTextBlack(textBlack);
   textBlack->Draw("same");


   TText* text1 = new TText(0.20,0.65,"BPIX");
   SetTextAll(text1); 
   text1->Draw("same");

   TText* text_z2 = new TText(0.20,0.60,"");
   SetTextAlignmentLineUp(text_z2);
   text_z2->Draw("same");
   TText* text_z1 = new TText(0.20,0.55,"");
   SetTextAlignmentLineDown(text_z1);
   text_z1->Draw("same");



   TkAlStyle::drawStandardTitle();

   multigraph->GetXaxis()->SetTitle("z [cm]");
   //multigraph->GetXaxis()->SetLabelFont(132);
   //multigraph->GetXaxis()->SetLabelSize(0.08);
   //multigraph->GetXaxis()->SetTitleSize(0.08);
   multigraph->GetYaxis()->SetTitle("#Deltaz [#mum]");
   //multigraph->GetYaxis()->SetLabelFont(132);
   //multigraph->GetYaxis()->SetLabelSize(0.08);
   //multigraph->GetYaxis()->SetTitleSize(0.08);
   //multigraph->GetYaxis()->SetTitleFont(42);
   c_z_vs_dz_PXB_1->Modified();
   c_z_vs_dz_PXB_1->cd();
   c_z_vs_dz_PXB_1->SetSelected(c_z_vs_dz_PXB_1);
   c_z_vs_dz_PXB_1->SaveAs("z_vs_dz_PXB_1.png");
   c_z_vs_dz_PXB_1->SaveAs("z_vs_dz_PXB_1.pdf");
}
