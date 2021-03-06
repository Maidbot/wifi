/*
 * Copyright (c) 2017 Redpine Signals Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 	1. Redistributions of source code must retain the above copyright
 * 	   notice, this list of conditions and the following disclaimer.
 *
 * 	2. Redistributions in binary form must reproduce the above copyright
 * 	   notice, this list of conditions and the following disclaimer in the
 * 	   documentation and/or other materials provided with the distribution.
 *
 * 	3. Neither the name of the copyright holder nor the names of its
 * 	   contributors may be used to endorse or promote products derived from
 * 	   this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION). HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */


enum ISOCountryCode {
	CTRY_AFGHANISTAN	= 4,
	CTRY_ALBANIA		= 8,	/* Albania */
	CTRY_ALGERIA		= 12,	/* Algeria */
	CTRY_AMERICAN_SAMOA	= 16,
	CTRY_ANDORRA		= 20,
	CTRY_ANGOLA		= 24,
	CTRY_ANGUILLA		= 660,
	CTRY_ANTARTICA		= 10,
	CTRY_ANTIGUA		= 28,	/* Antigua and Barbuda */
	CTRY_ARGENTINA		= 32,	/* Argentina */
	CTRY_ARMENIA		= 51,	/* Armenia */
	CTRY_ARUBA		= 533,	/* Aruba */
	CTRY_AUSTRALIA		= 36,	/* Australia */
	CTRY_AUSTRIA		= 40,	/* Austria */
	CTRY_AZERBAIJAN		= 31,	/* Azerbaijan */
	CTRY_BAHAMAS		= 44,	/* Bahamas */
	CTRY_BAHRAIN		= 48,	/* Bahrain */
	CTRY_BANGLADESH		= 50,	/* Bangladesh */
	CTRY_BARBADOS		= 52,
	CTRY_BELARUS		= 112,	/* Belarus */
	CTRY_BELGIUM		= 56,	/* Belgium */
	CTRY_BELIZE		= 84,
	CTRY_BENIN		= 204,
	CTRY_BERMUDA		= 60,
	CTRY_BHUTAN		= 64,
	CTRY_BOLIVIA		= 68,	/* Bolivia */
	CTRY_BOSNIA_AND_HERZEGOWINA = 70,
	CTRY_BOTSWANA		= 72,
	CTRY_BOUVET_ISLAND	= 74,
	CTRY_BRAZIL		= 76,	/* Brazil */
	CTRY_BRITISH_INDIAN_OCEAN_TERRITORY = 86,
	CTRY_BRUNEI_DARUSSALAM	= 96,	/* Brunei Darussalam */
	CTRY_BULGARIA		= 100,	/* Bulgaria */
	CTRY_BURKINA_FASO	= 854,
	CTRY_BURUNDI		= 108,
	CTRY_CAMBODIA		= 116,
	CTRY_CAMEROON		= 120,
	CTRY_CANADA		= 124,	/* Canada */
	CTRY_CAPE_VERDE		= 132,
	CTRY_CAYMAN_ISLANDS	= 136,
	CTRY_CENTRAL_AFRICAN_REPUBLIC = 140,
	CTRY_CHAD		= 148,
	CTRY_CHILE		= 152,	/* Chile */
	CTRY_CHINA		= 156,	/* People's Republic of China */
	CTRY_CHRISTMAS_ISLAND	= 162,
	CTRY_COCOS_ISLANDS	= 166,
	CTRY_COLOMBIA		= 170,	/* Colombia */
	CTRY_COMOROS		= 174,
	CTRY_CONGO		= 178,
	CTRY_COOK_ISLANDS	= 184,
	CTRY_COSTA_RICA		= 188,	/* Costa Rica */
	CTRY_COTE_DIVOIRE	= 384,
	CTRY_CROATIA		= 191,	/* Croatia (local name: Hrvatska) */
	CTRY_CYPRUS		= 196,	/* Cyprus */
	CTRY_CZECH		= 203,	/* Czech Republic */
	CTRY_DENMARK		= 208,	/* Denmark */
	CTRY_DJIBOUTI		= 262,
	CTRY_DOMINICA		= 212,
	CTRY_DOMINICAN_REPUBLIC	= 214,	/* Dominican Republic */
	CTRY_EAST_TIMOR		= 626,
	CTRY_ECUADOR		= 218,	/* Ecuador */
	CTRY_EGYPT		= 818,	/* Egypt */
	CTRY_EL_SALVADOR	= 222,	/* El Salvador */
	CTRY_EQUATORIAL_GUINEA	= 226,
	CTRY_ERITREA		= 232,
	CTRY_ESTONIA		= 233,	/* Estonia */
	CTRY_ETHIOPIA		= 210,
	CTRY_FALKLAND_ISLANDS	= 238,	/* (Malvinas) */
	CTRY_FAEROE_ISLANDS	= 234,	/* Faeroe Islands */
	CTRY_FIJI		= 242,
	CTRY_FINLAND		= 246,	/* Finland */
	CTRY_FRANCE		= 250,	/* France */
	CTRY_FRANCE2		= 255,	/* France (Metropolitan) */
	CTRY_FRENCH_GUIANA	= 254,
	CTRY_FRENCH_POLYNESIA	= 258,
	CTRY_FRENCH_SOUTHERN_TERRITORIES	= 260,
	CTRY_GABON		= 266,
	CTRY_GAMBIA		= 270,
	CTRY_GEORGIA		= 268,	/* Georgia */
	CTRY_GERMANY		= 276,	/* Germany */
	CTRY_GHANA		= 288,
	CTRY_GIBRALTAR		= 292,
	CTRY_GREECE		= 300,	/* Greece */
	CTRY_GREENLAND		= 304,
	CTRY_GRENADA		= 308,
	CTRY_GUADELOUPE		= 312,
	CTRY_GUAM		= 316,
	CTRY_GUATEMALA		= 320,	/* Guatemala */
	CTRY_GUINEA		= 324,
	CTRY_GUINEA_BISSAU	= 624,
	CTRY_GUYANA		= 328,
	/* XXX correct remainder */
	CTRY_HAITI		= 332,
	CTRY_HONDURAS		= 340,	/* Honduras */
	CTRY_HONG_KONG		= 344,	/* Hong Kong S.A.R., P.R.C. */
	CTRY_HUNGARY		= 348,	/* Hungary */
	CTRY_ICELAND		= 352,	/* Iceland */
	CTRY_INDIA		= 356,	/* India */
	CTRY_INDONESIA		= 360,	/* Indonesia */
	CTRY_IRAN		= 364,	/* Iran */
	CTRY_IRAQ		= 368,	/* Iraq */
	CTRY_IRELAND		= 372,	/* Ireland */
	CTRY_ISRAEL		= 376,	/* Israel */
	CTRY_ITALY		= 380,	/* Italy */
	CTRY_JAMAICA		= 388,	/* Jamaica */
	CTRY_JAPAN		= 392,	/* Japan */
	CTRY_JORDAN		= 400,	/* Jordan */
	CTRY_KAZAKHSTAN		= 398,	/* Kazakhstan */
	CTRY_KENYA		= 404,	/* Kenya */
	CTRY_KOREA_NORTH	= 408,	/* North Korea */
	CTRY_KOREA_ROC		= 410,	/* South Korea */
	CTRY_KOREA_ROC2		= 411,	/* South Korea */
	CTRY_KUWAIT		= 414,	/* Kuwait */
	CTRY_LATVIA		= 428,	/* Latvia */
	CTRY_LEBANON		= 422,	/* Lebanon */
	CTRY_LIBYA		= 434,	/* Libya */
	CTRY_LIECHTENSTEIN	= 438,	/* Liechtenstein */
	CTRY_LITHUANIA		= 440,	/* Lithuania */
	CTRY_LUXEMBOURG		= 442,	/* Luxembourg */
	CTRY_MACAU		= 446,	/* Macau */
	CTRY_MACEDONIA		= 807,	/* the Former Yugoslav Republic of Macedonia */
	CTRY_MALAYSIA		= 458,	/* Malaysia */
	CTRY_MALTA		= 470,	/* Malta */
	CTRY_MEXICO		= 484,	/* Mexico */
	CTRY_MONACO		= 492,	/* Principality of Monaco */
	CTRY_MOROCCO		= 504,	/* Morocco */
	CTRY_NEPAL		= 524,	/* Nepal */
	CTRY_NETHERLANDS	= 528,	/* Netherlands */
	CTRY_NEW_ZEALAND	= 554,	/* New Zealand */
	CTRY_NICARAGUA		= 558,	/* Nicaragua */
	CTRY_NORWAY		= 578,	/* Norway */
	CTRY_OMAN		= 512,	/* Oman */
	CTRY_PAKISTAN		= 586,	/* Islamic Republic of Pakistan */
	CTRY_PANAMA		= 591,	/* Panama */
	CTRY_PARAGUAY		= 600,	/* Paraguay */
	CTRY_PERU		= 604,	/* Peru */
	CTRY_PHILIPPINES	= 608,	/* Republic of the Philippines */
	CTRY_POLAND		= 616,	/* Poland */
	CTRY_PORTUGAL		= 620,	/* Portugal */
	CTRY_PUERTO_RICO	= 630,	/* Puerto Rico */
	CTRY_QATAR		= 634,	/* Qatar */
	CTRY_ROMANIA		= 642,	/* Romania */
	CTRY_RUSSIA		= 643,	/* Russia */
	CTRY_SAUDI_ARABIA	= 682,	/* Saudi Arabia */
	CTRY_SINGAPORE		= 702,	/* Singapore */
	CTRY_SLOVAKIA		= 703,	/* Slovak Republic */
	CTRY_SLOVENIA		= 705,	/* Slovenia */
	CTRY_SOUTH_AFRICA	= 710,	/* South Africa */
	CTRY_SPAIN		= 724,	/* Spain */
	CTRY_SRILANKA		= 144,	/* Sri Lanka */
	CTRY_SWEDEN		= 752,	/* Sweden */
	CTRY_SWITZERLAND	= 756,	/* Switzerland */
	CTRY_SYRIA		= 760,	/* Syria */
	CTRY_TAIWAN		= 158,	/* Taiwan */
	CTRY_THAILAND		= 764,	/* Thailand */
	CTRY_TRINIDAD_Y_TOBAGO	= 780,	/* Trinidad y Tobago */
	CTRY_TUNISIA		= 788,	/* Tunisia */
	CTRY_TURKEY		= 792,	/* Turkey */
	CTRY_UAE		= 784,	/* U.A.E. */
	CTRY_UKRAINE		= 804,	/* Ukraine */
	CTRY_UNITED_KINGDOM	= 826,	/* United Kingdom */
	CTRY_UNITED_STATES	= 840,	/* United States */
	CTRY_URUGUAY		= 858,	/* Uruguay */
	CTRY_UZBEKISTAN		= 860,	/* Uzbekistan */
	CTRY_VENEZUELA		= 862,	/* Venezuela */
	CTRY_VIET_NAM		= 704,	/* Viet Nam */
	CTRY_YEMEN		= 887,	/* Yemen */
	CTRY_ZIMBABWE		= 716,	/* Zimbabwe */

	/* NB: from here down not listed in 3166; they come from Atheros */
	CTRY_DEBUG		= 0x1ff, /* debug */
	CTRY_DEFAULT		= 0,	 /* default */

	CTRY_UNITED_STATES_FCC49 = 842,	/* United States (Public Safety)*/
	CTRY_KOREA_ROC3		= 412,	/* South Korea */

	CTRY_JAPAN1		= 393,	/* Japan (JP1) */
	CTRY_JAPAN2		= 394,	/* Japan (JP0) */
	CTRY_JAPAN3		= 395,	/* Japan (JP1-1) */
	CTRY_JAPAN4		= 396,	/* Japan (JE1) */
	CTRY_JAPAN5		= 397,	/* Japan (JE2) */
	CTRY_JAPAN6		= 399,	/* Japan (JP6) */
	CTRY_JAPAN7		= 4007,	/* Japan (J7) */
	CTRY_JAPAN8		= 4008,	/* Japan (J8) */
	CTRY_JAPAN9		= 4009,	/* Japan (J9) */
	CTRY_JAPAN10		= 4010,	/* Japan (J10) */
	CTRY_JAPAN11		= 4011,	/* Japan (J11) */
	CTRY_JAPAN12		= 4012,	/* Japan (J12) */
	CTRY_JAPAN13		= 4013,	/* Japan (J13) */
	CTRY_JAPAN14		= 4014,	/* Japan (J14) */
	CTRY_JAPAN15		= 4015,	/* Japan (J15) */
	CTRY_JAPAN16		= 4016,	/* Japan (J16) */
	CTRY_JAPAN17		= 4017,	/* Japan (J17) */
	CTRY_JAPAN18		= 4018,	/* Japan (J18) */
	CTRY_JAPAN19		= 4019,	/* Japan (J19) */
	CTRY_JAPAN20		= 4020,	/* Japan (J20) */
	CTRY_JAPAN21		= 4021,	/* Japan (J21) */
	CTRY_JAPAN22		= 4022,	/* Japan (J22) */
	CTRY_JAPAN23		= 4023,	/* Japan (J23) */
	CTRY_JAPAN24		= 4024,	/* Japan (J24) */
};
