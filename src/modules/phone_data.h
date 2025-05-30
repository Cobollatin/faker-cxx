
#pragma once

#include <array>
#include <string_view>

namespace faker::phone
{
const auto areaCodes = std::to_array<std::string_view>({
    "+1",   "+144", "+20",  "+210", "+211", "+212", "+213", "+214", "+215", "+216", "+217", "+218", "+219", "+220",
    "+221", "+222", "+223", "+224", "+225", "+226", "+227", "+228", "+229", "+230", "+231", "+232", "+233", "+234",
    "+235", "+236", "+237", "+238", "+239", "+240", "+241", "+242", "+243", "+244", "+245", "+246", "+247", "+248",
    "+249", "+250", "+251", "+252", "+253", "+254", "+255", "+256", "+257", "+258", "+259", "+260", "+261", "+262",
    "+263", "+264", "+265", "+266", "+267", "+268", "+269", "+27",  "+28",  "+290", "+291", "+292", "+293", "+294",
    "+295", "+296", "+297", "+298", "+299", "+30",  "+31",  "+32",  "+33",  "+34",  "+350", "+351", "+352", "+353",
    "+354", "+355", "+356", "+357", "+358", "+359", "+36",  "+370", "+371", "+373", "+374", "+375", "+377", "+38",
    "+380", "+381", "+385", "+387", "+389", "+39",  "+40",  "+41",  "+42",  "+43",  "+44",  "+45",  "+46",  "+47",
    "+48",  "+49",  "+500", "+501", "+502", "+503", "+504", "+505", "+506", "+507", "+508", "+509", "+51",  "+52",
    "+53",  "+54",  "+55",  "+56",  "+57",  "+58",  "+590", "+591", "+592", "+593", "+594", "+595", "+596", "+597",
    "+598", "+599", "+60",  "+61",  "+62",  "+63",  "+64",  "+65",  "+66",  "+670", "+671", "+672", "+673", "+674",
    "+675", "+676", "+677", "+678", "+679", "+680", "+681", "+682", "+683", "+684", "+685", "+686", "+687", "+688",
    "+689", "+690", "+691", "+692", "+7",   "+808", "+809", "+81",  "+82",  "+84",  "+850", "+852", "+853", "+855",
    "+856", "+86",  "+871", "+872", "+873", "+874", "+880", "+886", "+90 ", "+91",  "+92",  "+93",  "+94",  "+95",
    "+960", "+961", "+962", "+963", "+964", "+965", "+966", "+967", "+968", "+969", "+971", "+972", "+973", "+974",
    "+975", "+976", "+977", "+98",  "+993", "+994", "+995",
});

const auto PhonePlatforms = std::to_array<std::string_view>({
    "Android OS",
    "Palm OS",
    "Symbian",
    "Tizen",
    "Windows Phone",
    "iOS",
});

const auto PhoneModelNames = std::to_array<std::string_view>({
    "Google Pixel 4",
    "Google Pixel 6",
    "Google Pixel 7 Pro",
    "Google Pixel 8",
    "Google Pixel 8 Pro",
    "Huawei P50",
    "Huawei Mate 50 Pro",
    "Motorola Edge 20",
    "Motorola Moto G Power",
    "Motorola Razr 40 Ultra",
    "OnePlus 9",
    "OnePlus 10 Pro",
    "OnePlus 11",
    "Oppo Find X3",
    "Oppo Find X5 Pro",
    "Oppo Reno10",
    "Samsung Galaxy S22",
    "Samsung Galaxy S23 Ultra",
    "Samsung Galaxy S24",
    "Samsung Galaxy Z Fold5",
    "Samsung Galaxy Z Flip5",
    "Samsung Galaxy Note 20 Ultra",
    "Samsung Galaxy A54",
    "Sony Xperia 1 III",
    "Sony Xperia 5 V",
    "Sony Xperia 10 IV",
    "Xiaomi Mi 11",
    "Xiaomi 12 Pro",
    "Xiaomi 13 Ultra",
    "Xiaomi Redmi Note 12",
    "iPhone 13",
    "iPhone 14",
    "iPhone 14 Pro",
    "iPhone 15",
    "iPhone 15 Pro",
    "iPhone 15 Pro Max",
    "iPhone SE (2022)",
    "iPhone X",
    "iPhone XR",
    "iPhone 11",
});

const auto PhoneManufacturers = std::to_array<std::string_view>({
    "Apple",  "Google",  "Huawei", "Motorola",  "OnePlus", "Oppo",    "Samsung", "Sony",
    "Xiaomi", "Asus",    "Honor",  "Realme",    "Nokia",   "ZTE",     "Lenovo",  "Vivo",
    "Meizu",  "Alcatel", "TCL",    "Fairphone", "BLU",     "Infinix", "Tecno",
});

const auto phoneNumbers = std::to_array<std::string_view>({
    "!##-###-###",          // Default
    "+93 (###) ###-####",   // Afghanistan
    "+358 (###) ###-####",  // Aland Islands
    "+355 (###) ###-####",  // Albania
    "+213 (###) ###-####",  // Algeria
    "+1 (###) ###-####",    // American Samoa
    "+376 (###) ###-####",  // Andorra
    "+244 (###) ###-####",  // Angola
    "+1 (###) ###-####",    // Anguilla
    "+1 (###) ###-####",    // Antigua and Barbuda
    "+54 (###) ###-####",   // Argentina
    "+374 (###) ###-####",  // Armenia
    "+297 (###) ###-####",  // Aruba
    "+61 (#) #### ####",    // Australia
    "+43 (###) #######",    // Austria
    "+994 (###) ###-###",   // Azerbaijan
    "+1 (###) ###-####",    // Bahamas
    "+973 (###) #### ####", // Bahrain
    "+880 (###) ###-####",  // Bangladesh
    "+1 (###) ###-####",    // Barbados
    "+375 (###) ###-##-##", // Belarus
    "+32 (###) ## ## ##",   // Belgium
    "+501 (###) ####",      // Belize
    "+229 (##) ##-####",    // Benin
    "+1 (###) ###-####",    // Bermuda
    "+975 (###) ####",      // Bhutan
    "+591 (#) ###-####",    // Bolivia
    "+387 (##) ###-###",    // Bosnia and Herzegovina
    "+267 (##) ###-###",    // Botswana
    "+55 (##) #####-####",  // Brazil
    "+673 (###) ####",      // Brunei Darussalam
    "+359 (#) ###-###",     // Bulgaria
    "+226 (##) ##-####",    // Burkina Faso
    "+257 (##) ##-####",    // Burundi
    "+855 (##) ###-###",    // Cambodia
    "+237 (#) ## ## ## ##", // Cameroon
    "+1 (###) ###-####",    // Canada
    "+238 (###) ##-##",     // Cape Verde
    "+1 (###) ###-####",    // Cayman Islands
    "+236 (##) ##-####",    // Central African Republic
    "+235 (##) ##-##-##",   // Chad
    "+56 (#) #### ####",    // Chile
    "+86 (###) #### ####",  // China
    "+57 (###) ###-####",   // Colombia
    "+269 (##) ##-##",      // Comoros
    "+242 (###) ###-####",  // Congo
    "+682 (###) ####",      // Cook Islands
    "+506 (###) ####-####", // Costa Rica
    "+385 (##) ###-###",    // Croatia
    "+53 (#) ###-####",     // Cuba
    "+599 (###) ####",      // Curacao
    "+357 (##) ######",     // Cyprus
    "+420 (###) ### ###",   // Czechia
    "+243 (###) ###-###",   // Democratic Republic of the Congo
    "+45 (##) ## ## ##",    // Denmark
    "+253 (##) ##-##-##",   // Djibouti
    "+1 (###) ###-####",    // Dominica
    "+1 (###) ###-####",    // Dominican Republic
    "+593 (#) ###-####",    // Ecuador
    "+20 (##) #### ####",   // Egypt
    "+503 (####) ####",     // El Salvador
    "+240 (##) ###-####",   // Equatorial Guinea
    "+291 (##) ###-###",    // Eritrea
    "+372 (##) ###-####",   // Estonia
    "+268 (##) ###-###",    // Eswatini
    "+251 (###) ###-####",  // Ethiopia
    "+298 (###) ###",       // Faroe Islands
    "+679 (#) ###-####",    // Fiji
    "+358 (##) #### ###",   // Finland
    "+33 (#) ## ## ## ##",  // France
    "+594 (####) ####",     // French Guiana
    "+689 (##) ##-##-##",   // French Polynesia
    "+241 (#) ## ## ##",    // Gabon
    "+220 (###) ####",      // Gambia
    "+995 (###) #### ##",   // Georgia
    "+49 (###) #######",    // Germany
    "+233 (#) ###-####",    // Ghana
    "+350 (###) #####",     // Gibraltar
    "+30 (###) ###-####",   // Greece
    "+299 (##) ##-##-##",   // Greenland
    "+1 (###) ###-####",    // Grenada
    "+590 (###) ##-##-##",  // Guadeloupe
    "+1 (###) ###-####",    // Guam
    "+502 (#) #### ####",   // Guatemala
    "+44 (###) #### ###",   // Guernsey
    "+224 (#) ###-####",    // Guinea
    "+245 (##) ##-##-##",   // Guinea-Bissau
    "+592 (###) ####",      // Guyana
    "+509 (#) ####-####",   // Haiti
    "+379 (###) ########",  // Holy See (Vatican City State)
    "+504 (####) ####",     // Honduras
    "+852 (####) ####",     // Hong Kong
    "+36 (##) ###-###",     // Hungary
    "+354 (###) ####",      // Iceland
    "+91 (###) ###-####",   // India
    "+62 (###) ###-####",   // Indonesia
    "+98 (###) ###-####",   // Iran
    "+964 (###) ###-####",  // Iraq
    "+353 (#) ###-####",    // Ireland
    "+44 (###) #### ###",   // Isle of Man
    "+972 (##) ###-####",   // Israel
    "+39 (###) ###-####",   // Italy
    "+1 (###) ###-####",    // Jamaica
    "+81 (#) ###-####",     // Japan
    "+44 (###) #### ###",   // Jersey
    "+962 (#) #### ####",   // Jordan
    "+82 (##) #### ####",   // Republic of Korea
    "+965 (###) #####",     // Kuwait
    "+996 (###) ###-###",   // Kyrgyz Republic
    "+371 (###) ###-###",   // Latvia
    "+961 (#) ###-###",     // Lebanon
    "+266 (###) ####",      // Lesotho
    "+231 (##) ###-####",   // Liberia
    "+218 (##) ###-###",    // Libyan Arab Jamahiriya
    "+423 (###) ###-####",  // Liechtenstein
    "+370 (###) #####",     // Lithuania
    "+352 (#) ###-###",     // Luxembourg
    "+853 (####) ####",     // Macao
    "+261 (##) ##-###-##",  // Madagascar
    "+265 (##) ###-####",   // Malawi
    "+60 (##) ###-####",    // Malaysia
    "+960 (###) ####",      // Maldives
    "+223 (##) ##-##-##",   // Mali
    "+356 (###) ####",      // Malta
    "+692 (###) ####",      // Marshall Islands
    "+596 (###) ##-##-##",  // Martinique
    "+222 (##) ##-####",    // Mauritania
    "+230 (###) ####",      // Mauritius
    "+262 (##) ##-##-##",   // Mayotte
    "+52 (###) ###-####",   // Mexico
    "+691 (###) ####",      // Micronesia
    "+373 (##) ###-###",    // Moldova
    "+377 (##) ## ## ##",   // Monaco
    "+976 (#) ##-####",     // Mongolia
    "+382 (##) ###-###",    // Montenegro
    "+1 (###) ###-####",    // Montserrat
    "+212 (##) ##-######",  // Morocco
    "+258 (##) ###-####",   // Mozambique
    "+95 (##) ###-####",    // Myanmar
    "+264 (##) ###-####",   // Namibia
    "+674 (###) ####",      // Nauru
    "+977 (###) ###-####",  // Nepal
    "+31 (#) ### ####",     // Netherlands
    "+687 (##) ##-##-##",   // New Caledonia
    "+64 (##) ###-####",    // New Zealand
    "+505 (###) ####",      // Nicaragua
    "+227 (##) ##-##-##",   // Niger
    "+234 (###) ###-####",  // Nigeria
    "+683 (###) ####",      // Niue
    "+389 (##) ###-###",    // North Macedonia
    "+1 (###) ###-####",    // Northern Mariana Islands
    "+47 (##) ##-##-##",    // Norway
    "+968 (###) #### ####", // Oman
    "+92 (###) #######",    // Pakistan
    "+680 (###) ####",      // Palau
    "+970 (###) ###-####",  // Palestine
    "+507 (###) ###-####",  // Panama
    "+675 (###) ####",      // Papua New Guinea
    "+595 (###) ###-###",   // Paraguay
    "+51 (#) ###-####",     // Peru
    "+63 (###) ###-####",   // Philippines
    "+48 (##) ###-##-##",   // Poland
    "+351 (###) ###-###",   // Portugal
    "+1 (###) ###-####",    // Puerto Rico
    "+974 (###) #### ####", // Qatar
    "+262 (##) ##-##-##",   // Reunion
    "+40 (###) ###-####",   // Romania
    "+7 (###) ###-##-##",   // Russian Federation
    "+250 (###) ###-###",   // Rwanda
    "+590 (###) ##-##-##",  // Saint Barthelemy
    "+290 (###) ####",      // Saint Helena
    "+1 (###) ###-####",    // Saint Kitts and Nevis
    "+1 (###) ###-####",    // Saint Lucia
    "+590 (###) ##-##-##",  // Saint Martin
    "+508 (###) ####",      // Saint Pierre and Miquelon
    "+1 (###) ###-####",    // Saint Vincent and the Grenadines
    "+685 (###) ####",      // Samoa
    "+378 (###) ######",    // San Marino
    "+239 (###) ####",      // Sao Tome and Principe
    "+966 (###) ###-####",  // Saudi Arabia
    "+221 (###) ###-####",  // Senegal
    "+381 (##) ###-####",   // Serbia
    "+248 (#) ###-###",     // Seychelles
    "+232 (##) ###-###",    // Sierra Leone
    "+65 (####) ####",      // Singapore
    "+1 (###) ###-####",    // Sint Maarten
    "+421 (###) ###-###",   // Slovakia
    "+386 (##) ###-###",    // Slovenia
    "+677 (###) ####",      // Solomon Islands
    "+252 (#) ###-####",    // Somalia
    "+27 (##) ###-####",    // South Africa
    "+211 (##) ###-####",   // South Sudan
    "+34 (###) ###-###",    // Spain
    "+94 (###) ###-####",   // Sri Lanka
    "+249 (###) ###-####",  // Sudan
    "+597 (###) ####",      // Suriname
    "+47 (##) ##-##-##",    // Svalbard & Jan Mayen Islands
    "+46 (###) ### ## ##",  // Sweden
    "+41 (##) ### ## ##",   // Switzerland
    "+963 (##) ###-####",   // Syrian Arab Republic
    "+886 (#) ####-###",    // Taiwan
    "+992 (###) ###-###",   // Tajikistan
    "+255 (##) ###-####",   // Tanzania
    "+66 (#) ###-####",     // Thailand
    "+670 (###) ####",      // Timor-Leste
    "+228 (##) ##-##-##",   // Togo
    "+676 (##) ####",       // Tonga
    "+1 (###) ###-####",    // Trinidad and Tobago
    "+216 (##) ###-###",    // Tunisia
    "+90 (###) ###-####",   // Turkey
    "+993 (#) ###-####",    // Turkmenistan
    "+1 (###) ###-####",    // Turks and Caicos Islands
    "+688 (###) ####",      // Tuvalu
    "+256 (###) ###-###",   // Uganda
    "+380 (##) ###-###",    // Ukraine
    "+971 (###) ###-####",  // United Arab Emirates
    "+44 (###) #### ###",   // United Kingdom
    "+1 (###) ###-####",    // United States of America
    "+598 (#) #### ####",   // Uruguay
    "+998 (##) ###-####",   // Uzbekistan
    "+678 (###) ####",      // Vanuatu
    "+58 (###) ###-####",   // Venezuela
    "+84 (###) ###-####",   // Vietnam
    "+1 (###) ###-####",    // Virgin Islands, British
    "+1 (###) ###-####",    // Virgin Islands, U.S.
    "+681 (##) ##-##-##",   // Wallis and Futuna
    "+212 (###) ####",      // Western Sahara
    "+967 (###) ###-####",  // Yemen
    "+260 (###) ###-####",  // Zambia
    "+263 (###) ####",      // Zimbabwe
});

}
