// Auto-generated. Do not edit!

// (in-package kortex_driver.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class CountryCodeIdentifier {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
    }
    else {
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type CountryCodeIdentifier
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type CountryCodeIdentifier
    let len;
    let data = new CountryCodeIdentifier(null);
    return data;
  }

  static getMessageSize(object) {
    return 0;
  }

  static datatype() {
    // Returns string type for a message object
    return 'kortex_driver/CountryCodeIdentifier';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '4fbc3beb3b770b1abd5a62fb78a51afe';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    uint32 UNSPECIFIED_COUNTRY_CODE = 0
    
    uint32 UNITED_ARAB_EMIRATES_AE = 1
    
    uint32 ANTIGUA_AND_BARBUDA_AG = 2
    
    uint32 ANGUILLA_AI = 3
    
    uint32 ALBANIA_AL = 4
    
    uint32 AMERICAN_SAMOA_AS = 5
    
    uint32 AUSTRIA_AT = 6
    
    uint32 AUSTRALIA_AU = 7
    
    uint32 ARUBA_AW = 8
    
    uint32 AZERBAIJAN_AZ = 9
    
    uint32 BOSNIA_AND_HERZEGOVINA_BA = 10
    
    uint32 BANGLADESH_BD = 11
    
    uint32 BELGIUM_BE = 12
    
    uint32 BULGARIA_BG = 13
    
    uint32 BAHRAIN_BH = 14
    
    uint32 BERMUDA_BM = 15
    
    uint32 BRUNEI_DARUSSALAM_BN = 16
    
    uint32 BRAZIL_BR = 17
    
    uint32 BAHAMAS_BS = 18
    
    uint32 BELARUS_BY = 19
    
    uint32 SWITZERLAND_CH = 20
    
    uint32 CANADA_CA = 21
    
    uint32 CHINA_CN = 22
    
    uint32 COLOMBIA_CO = 23
    
    uint32 COSTA_RICA_CR = 24
    
    uint32 CYPRUS_CY = 25
    
    uint32 CZECH_REPUBLIC_CZ = 26
    
    uint32 GERMANY_DE = 27
    
    uint32 DENMARK_DK = 28
    
    uint32 ECUADOR_EC = 29
    
    uint32 ESTONIA_EE = 30
    
    uint32 EGYPT_EG = 31
    
    uint32 SPAIN_ES = 32
    
    uint32 ETHIOPIA_ET = 33
    
    uint32 FINLAND_FI = 34
    
    uint32 FRANCE_FR = 35
    
    uint32 UNITED_KINGDOM_GB = 36
    
    uint32 GRENADA_GD = 37
    
    uint32 FRENCH_GUIANA_GF = 38
    
    uint32 GUADELOUPE_GP = 39
    
    uint32 GREECE_GR = 40
    
    uint32 GUATEMALA_GT = 41
    
    uint32 GUAM_GU = 42
    
    uint32 HONG_KONG_HK = 43
    
    uint32 CROATIA_HR = 44
    
    uint32 HUNGARY_HU = 45
    
    uint32 INDIA_IN = 46
    
    uint32 INDONESIA_ID = 47
    
    uint32 IRELAND_IE = 48
    
    uint32 ISRAEL_IL = 49
    
    uint32 ICELAND_IS = 50
    
    uint32 ITALY_IT = 51
    
    uint32 JORDAN_JO = 52
    
    uint32 JAPAN_JP = 53
    
    uint32 CAMBODIA_KH = 54
    
    uint32 REPUBLIC_OF_KOREA_KR = 55
    
    uint32 KUWAIT_KW = 56
    
    uint32 CAYMAN_ISLANDS_KY = 57
    
    uint32 LAO_PDR_LA = 58
    
    uint32 LEBANON_LB = 59
    
    uint32 LIECHTENSTEIN_LI = 60
    
    uint32 SRI_LANKA_LK = 61
    
    uint32 LESOTHO_LS = 62
    
    uint32 LITHUANIA_LT = 63
    
    uint32 LUXEMBOURG_LU = 64
    
    uint32 LATVIA_LV = 65
    
    uint32 MOROCCO_MA = 66
    
    uint32 MONACO_MC = 67
    
    uint32 MOLDOVA_MD = 68
    
    uint32 MONTENEGRO_ME = 69
    
    uint32 REPUBLIC_OF_MACEDONIA_MK = 70
    
    uint32 MONGOLIA_MN = 71
    
    uint32 MARTINIQUE_MQ = 72
    
    uint32 MAURITANIA_MR = 73
    
    uint32 MALTA_MT = 74
    
    uint32 MAURITIUS_MU = 75
    
    uint32 MALDIVES_MV = 76
    
    uint32 MALAWI_MW = 77
    
    uint32 MEXICO_MX = 78
    
    uint32 MALAYSIA_MY = 79
    
    uint32 NICARAGUA_NI = 80
    
    uint32 NETHERLANDS_NL = 81
    
    uint32 NORWAY_NO = 82
    
    uint32 NEW_ZEALAND_NZ = 83
    
    uint32 OMAN_OM = 84
    
    uint32 PANAMA_PA = 85
    
    uint32 PERU_PE = 86
    
    uint32 PHILIPPINES_PH = 87
    
    uint32 POLAND_PL = 88
    
    uint32 PUERTO_RICO_PR = 89
    
    uint32 PORTUGAL_PT = 90
    
    uint32 PARAGUAY_PY = 91
    
    uint32 REUNION_RE = 92
    
    uint32 ROMANIA_RO = 93
    
    uint32 SERBIA_RS = 94
    
    uint32 RUSSIAN_FEDERATION_RU = 95
    
    uint32 SWEDEN_SE = 96
    
    uint32 SINGAPORE_SI = 97
    
    uint32 SLOVAKIA_SK = 98
    
    uint32 EL_SALVADOR_SV = 99
    
    uint32 THAILAND_TH = 100
    
    uint32 TUNISIA_TN = 101
    
    uint32 TURKEY_TR = 102
    
    uint32 TRINIDAD_AND_TOBAGO_TT = 103
    
    uint32 TAIWAN_PROVINCE_OF_CHINA_TW = 104
    
    uint32 UKRAINE_UA = 105
    
    uint32 UNITED_STATES_US = 106
    
    uint32 HOLY_SEE_VATICAN_CITY_STATE_VA = 107
    
    uint32 BOLIVARIAN_REPUBLIC_OF_VENEZUELA_VE = 108
    
    uint32 BRITISH_VIRGIN_ISLANDS_VG = 109
    
    uint32 VIETNAM_VN = 110
    
    uint32 MAYOTTE_YT = 111
    
    uint32 SOUTH_AFRICA_ZA = 112
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new CountryCodeIdentifier(null);
    return resolved;
    }
};

// Constants for message
CountryCodeIdentifier.Constants = {
  UNSPECIFIED_COUNTRY_CODE: 0,
  UNITED_ARAB_EMIRATES_AE: 1,
  ANTIGUA_AND_BARBUDA_AG: 2,
  ANGUILLA_AI: 3,
  ALBANIA_AL: 4,
  AMERICAN_SAMOA_AS: 5,
  AUSTRIA_AT: 6,
  AUSTRALIA_AU: 7,
  ARUBA_AW: 8,
  AZERBAIJAN_AZ: 9,
  BOSNIA_AND_HERZEGOVINA_BA: 10,
  BANGLADESH_BD: 11,
  BELGIUM_BE: 12,
  BULGARIA_BG: 13,
  BAHRAIN_BH: 14,
  BERMUDA_BM: 15,
  BRUNEI_DARUSSALAM_BN: 16,
  BRAZIL_BR: 17,
  BAHAMAS_BS: 18,
  BELARUS_BY: 19,
  SWITZERLAND_CH: 20,
  CANADA_CA: 21,
  CHINA_CN: 22,
  COLOMBIA_CO: 23,
  COSTA_RICA_CR: 24,
  CYPRUS_CY: 25,
  CZECH_REPUBLIC_CZ: 26,
  GERMANY_DE: 27,
  DENMARK_DK: 28,
  ECUADOR_EC: 29,
  ESTONIA_EE: 30,
  EGYPT_EG: 31,
  SPAIN_ES: 32,
  ETHIOPIA_ET: 33,
  FINLAND_FI: 34,
  FRANCE_FR: 35,
  UNITED_KINGDOM_GB: 36,
  GRENADA_GD: 37,
  FRENCH_GUIANA_GF: 38,
  GUADELOUPE_GP: 39,
  GREECE_GR: 40,
  GUATEMALA_GT: 41,
  GUAM_GU: 42,
  HONG_KONG_HK: 43,
  CROATIA_HR: 44,
  HUNGARY_HU: 45,
  INDIA_IN: 46,
  INDONESIA_ID: 47,
  IRELAND_IE: 48,
  ISRAEL_IL: 49,
  ICELAND_IS: 50,
  ITALY_IT: 51,
  JORDAN_JO: 52,
  JAPAN_JP: 53,
  CAMBODIA_KH: 54,
  REPUBLIC_OF_KOREA_KR: 55,
  KUWAIT_KW: 56,
  CAYMAN_ISLANDS_KY: 57,
  LAO_PDR_LA: 58,
  LEBANON_LB: 59,
  LIECHTENSTEIN_LI: 60,
  SRI_LANKA_LK: 61,
  LESOTHO_LS: 62,
  LITHUANIA_LT: 63,
  LUXEMBOURG_LU: 64,
  LATVIA_LV: 65,
  MOROCCO_MA: 66,
  MONACO_MC: 67,
  MOLDOVA_MD: 68,
  MONTENEGRO_ME: 69,
  REPUBLIC_OF_MACEDONIA_MK: 70,
  MONGOLIA_MN: 71,
  MARTINIQUE_MQ: 72,
  MAURITANIA_MR: 73,
  MALTA_MT: 74,
  MAURITIUS_MU: 75,
  MALDIVES_MV: 76,
  MALAWI_MW: 77,
  MEXICO_MX: 78,
  MALAYSIA_MY: 79,
  NICARAGUA_NI: 80,
  NETHERLANDS_NL: 81,
  NORWAY_NO: 82,
  NEW_ZEALAND_NZ: 83,
  OMAN_OM: 84,
  PANAMA_PA: 85,
  PERU_PE: 86,
  PHILIPPINES_PH: 87,
  POLAND_PL: 88,
  PUERTO_RICO_PR: 89,
  PORTUGAL_PT: 90,
  PARAGUAY_PY: 91,
  REUNION_RE: 92,
  ROMANIA_RO: 93,
  SERBIA_RS: 94,
  RUSSIAN_FEDERATION_RU: 95,
  SWEDEN_SE: 96,
  SINGAPORE_SI: 97,
  SLOVAKIA_SK: 98,
  EL_SALVADOR_SV: 99,
  THAILAND_TH: 100,
  TUNISIA_TN: 101,
  TURKEY_TR: 102,
  TRINIDAD_AND_TOBAGO_TT: 103,
  TAIWAN_PROVINCE_OF_CHINA_TW: 104,
  UKRAINE_UA: 105,
  UNITED_STATES_US: 106,
  HOLY_SEE_VATICAN_CITY_STATE_VA: 107,
  BOLIVARIAN_REPUBLIC_OF_VENEZUELA_VE: 108,
  BRITISH_VIRGIN_ISLANDS_VG: 109,
  VIETNAM_VN: 110,
  MAYOTTE_YT: 111,
  SOUTH_AFRICA_ZA: 112,
}

module.exports = CountryCodeIdentifier;
