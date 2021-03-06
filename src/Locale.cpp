/* 
 * Locale - Translates LCIDs into their names
 * the table data is taken from internet
 * 
 * Author:  Domenico Rotiroti
 * License: GPL3 (see COPYING)
 */

#include "Locale.h"

using std::string;
using std::map;

Locale::Locale() {
    l[1078] = "Afrikaans - South Africa";
    l[1052] = "Albanian - Albania";
    l[1156] = "Alsatian";
    l[1118] = "Amharic - Ethiopia";
    l[1025] = "Arabic - Saudi Arabia";
    l[5121] = "Arabic - Algeria";
    l[15361] = "Arabic - Bahrain";
    l[3073] = "Arabic - Egypt";
    l[2049] = "Arabic - Iraq";
    l[11265] = "Arabic - Jordan";
    l[13313] = "Arabic - Kuwait";
    l[12289] = "Arabic - Lebanon";
    l[4097] = "Arabic - Libya";
    l[6145] = "Arabic - Morocco";
    l[8193] = "Arabic - Oman";
    l[16385] = "Arabic - Qatar";
    l[10241] = "Arabic - Syria";
    l[7169] = "Arabic - Tunisia";
    l[14337] = "Arabic - U.A.E.";
    l[9217] = "Arabic - Yemen";
    l[1067] = "Armenian - Armenia";
    l[1101] = "Assamese";
    l[2092] = "Azeri (Cyrillic)";
    l[1068] = "Azeri (Latin)";
    l[1133] = "Bashkir";
    l[1069] = "Basque";
    l[1059] = "Belarusian";
    l[1093] = "Bengali (India)";
    l[2117] = "Bengali (Bangladesh)";
    l[5146] = "Bosnian (Bosnia/Herzegovina)";
    l[1150] = "Breton";
    l[1026] = "Bulgarian";
    l[1109] = "Burmese";
    l[1027] = "Catalan";
    l[1116] = "Cherokee - United States";
    l[2052] = "Chinese - People's Republic of China";
    l[4100] = "Chinese - Singapore";
    l[1028] = "Chinese - Taiwan";
    l[3076] = "Chinese - Hong Kong SAR";
    l[5124] = "Chinese - Macao SAR";
    l[1155] = "Corsican";
    l[1050] = "Croatian";
    l[4122] = "Croatian (Bosnia/Herzegovina)";
    l[1029] = "Czech";
    l[1030] = "Danish";
    l[1164] = "Dari";
    l[1125] = "Divehi";
    l[1043] = "Dutch - Netherlands";
    l[2067] = "Dutch - Belgium";
    l[1126] = "Edo";
    l[1033] = "English - United States";
    l[2057] = "English - United Kingdom";
    l[3081] = "English - Australia";
    l[10249] = "English - Belize";
    l[4105] = "English - Canada";
    l[9225] = "English - Caribbean";
    l[15369] = "English - Hong Kong SAR";
    l[16393] = "English - India";
    l[14345] = "English - Indonesia";
    l[6153] = "English - Ireland";
    l[8201] = "English - Jamaica";
    l[17417] = "English - Malaysia";
    l[5129] = "English - New Zealand";
    l[13321] = "English - Philippines";
    l[18441] = "English - Singapore";
    l[7177] = "English - South Africa";
    l[11273] = "English - Trinidad";
    l[12297] = "English - Zimbabwe";
    l[1061] = "Estonian";
    l[1080] = "Faroese";
    l[1065] = "Farsi";
    l[1124] = "Filipino";
    l[1035] = "Finnish";
    l[1036] = "French - France";
    l[2060] = "French - Belgium";
    l[11276] = "French - Cameroon";
    l[3084] = "French - Canada";
    l[9228] = "French - Democratic Rep. of Congo";
    l[12300] = "French - Cote d'Ivoire";
    l[15372] = "French - Haiti";
    l[5132] = "French - Luxembourg";
    l[13324] = "French - Mali";
    l[6156] = "French - Monaco";
    l[14348] = "French - Morocco";
    l[58380] = "French - North Africa";
    l[8204] = "French - Reunion";
    l[10252] = "French - Senegal";
    l[4108] = "French - Switzerland";
    l[7180] = "French - West Indies";
    l[1122] = "Frisian - Netherlands";
    l[1127] = "Fulfulde - Nigeria";
    l[1071] = "FYRO Macedonian";
    l[1110] = "Galician";
    l[1079] = "Georgian";
    l[1031] = "German - Germany";
    l[3079] = "German - Austria";
    l[5127] = "German - Liechtenstein";
    l[4103] = "German - Luxembourg";
    l[2055] = "German - Switzerland";
    l[1032] = "Greek";
    l[1135] = "Greenlandic";
    l[1140] = "Guarani - Paraguay";
    l[1095] = "Gujarati";
    l[1128] = "Hausa - Nigeria";
    l[1141] = "Hawaiian - United States";
    l[1037] = "Hebrew";
    l[1081] = "Hindi";
    l[1038] = "Hungarian";
    l[1129] = "Ibibio - Nigeria";
    l[1039] = "Icelandic";
    l[1136] = "Igbo - Nigeria";
    l[1057] = "Indonesian";
    l[1117] = "Inuktitut";
    l[2108] = "Irish";
    l[1040] = "Italian - Italy";
    l[2064] = "Italian - Switzerland";
    l[1041] = "Japanese";
    l[1158] = "K'iche";
    l[1099] = "Kannada";
    l[1137] = "Kanuri - Nigeria";
    l[2144] = "Kashmiri";
    l[1120] = "Kashmiri (Arabic)";
    l[1087] = "Kazakh";
    l[1107] = "Khmer";
    l[1159] = "Kinyarwanda";
    l[1111] = "Konkani";
    l[1042] = "Korean";
    l[1088] = "Kyrgyz (Cyrillic)";
    l[1108] = "Lao";
    l[1142] = "Latin";
    l[1062] = "Latvian";
    l[1063] = "Lithuanian";
    l[1134] = "Luxembourgish";
    l[1086] = "Malay - Malaysia";
    l[2110] = "Malay - Brunei Darussalam";
    l[1100] = "Malayalam";
    l[1082] = "Maltese";
    l[1112] = "Manipuri";
    l[1153] = "Maori - New Zealand";
    l[1146] = "Mapudungun";
    l[1102] = "Marathi";
    l[1148] = "Mohawk";
    l[1104] = "Mongolian (Cyrillic)";
    l[2128] = "Mongolian (Mongolian)";
    l[1121] = "Nepali";
    l[2145] = "Nepali - India";
    l[1044] = "Norwegian (Bokmål)";
    l[2068] = "Norwegian (Nynorsk)";
    l[1154] = "Occitan";
    l[1096] = "Oriya";
    l[1138] = "Oromo";
    l[1145] = "Papiamentu";
    l[1123] = "Pashto";
    l[1045] = "Polish";
    l[1046] = "Portuguese - Brazil";
    l[2070] = "Portuguese - Portugal";
    l[1094] = "Punjabi";
    l[2118] = "Punjabi (Pakistan)";
    l[1131] = "Quecha - Bolivia";
    l[2155] = "Quecha - Ecuador";
    l[3179] = "Quecha - Peru";
    l[1047] = "Rhaeto-Romanic";
    l[1048] = "Romanian";
    l[2072] = "Romanian - Moldava";
    l[1049] = "Russian";
    l[2073] = "Russian - Moldava";
    l[1083] = "Sami (Lappish)";
    l[1103] = "Sanskrit";
    l[1084] = "Scottish Gaelic";
    l[1132] = "Sepedi";
    l[3098] = "Serbian (Cyrillic)";
    l[2074] = "Serbian (Latin)";
    l[1113] = "Sindhi - India";
    l[2137] = "Sindhi - Pakistan";
    l[1115] = "Sinhalese - Sri Lanka";
    l[1051] = "Slovak";
    l[1060] = "Slovenian";
    l[1143] = "Somali";
    l[1070] = "Sorbian";
    l[3082] = "Spanish - Spain (Modern Sort)";
    l[1034] = "Spanish - Spain (Traditional Sort)";
    l[11274] = "Spanish - Argentina";
    l[16394] = "Spanish - Bolivia";
    l[13322] = "Spanish - Chile";
    l[9226] = "Spanish - Colombia";
    l[5130] = "Spanish - Costa Rica";
    l[7178] = "Spanish - Dominican Republic";
    l[12298] = "Spanish - Ecuador";
    l[17418] = "Spanish - El Salvador";
    l[4106] = "Spanish - Guatemala";
    l[18442] = "Spanish - Honduras";
    l[22538] = "Spanish - Latin America";
    l[2058] = "Spanish - Mexico";
    l[19466] = "Spanish - Nicaragua";
    l[6154] = "Spanish - Panama";
    l[15370] = "Spanish - Paraguay";
    l[10250] = "Spanish - Peru";
    l[20490] = "Spanish - Puerto Rico";
    l[21514] = "Spanish - United States";
    l[14346] = "Spanish - Uruguay";
    l[8202] = "Spanish - Venezuela";
    l[1072] = "Sutu";
    l[1089] = "Swahili";
    l[1053] = "Swedish";
    l[2077] = "Swedish - Finland";
    l[1114] = "Syriac";
    l[1064] = "Tajik";
    l[1119] = "Tamazight (Arabic)";
    l[2143] = "Tamazight (Latin)";
    l[1097] = "Tamil";
    l[1092] = "Tatar";
    l[1098] = "Telugu";
    l[1054] = "Thai";
    l[2129] = "Tibetan - Bhutan";
    l[1105] = "Tibetan - People's Republic of China";
    l[2163] = "Tigrigna - Eritrea";
    l[1139] = "Tigrigna - Ethiopia";
    l[1073] = "Tsonga";
    l[1074] = "Tswana";
    l[1055] = "Turkish";
    l[1090] = "Turkmen";
    l[1152] = "Uighur - China";
    l[1058] = "Ukrainian";
    l[1056] = "Urdu";
    l[2080] = "Urdu - India";
    l[2115] = "Uzbek (Cyrillic)";
    l[1091] = "Uzbek (Latin)";
    l[1075] = "Venda";
    l[1066] = "Vietnamese";
    l[1106] = "Welsh";
    l[1160] = "Wolof";
    l[1076] = "Xhosa";
    l[1157] = "Yakut";
    l[1144] = "Yi";
    l[1085] = "Yiddish";
    l[1130] = "Yoruba";
    l[1077] = "Zulu";
    // catch-all for "generic" languages
    l[9] = "English";
    l[10] = "Español";
    l[16] = "Italiano";
}
        
Locale * Locale::getInstance() {
	if(theInstance==NULL) theInstance = new Locale();
	return theInstance;	
}

std::string Locale::getName(int lcid) {
	return getInstance()->l[lcid];
}
                            
Locale * Locale::theInstance = NULL;