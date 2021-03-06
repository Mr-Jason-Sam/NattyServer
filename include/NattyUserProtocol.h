/*
 *  Author : luopeng , email : hibroad@hotmail.com
 * 
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of Author. (C) 2017
 * 
 *
 
****       *****
  ***        *
  ***        *                         *               *
  * **       *                         *               *
  * **       *                         *               *
  *  **      *                        **              **
  *  **      *                       ***             ***
  *   **     *       ******       ***********     ***********    *****    *****
  *   **     *     **     **          **              **           **      **
  *    **    *    **       **         **              **           **      *
  *    **    *    **       **         **              **            *      *
  *     **   *    **       **         **              **            **     *
  *     **   *            ***         **              **             *    *
  *      **  *       ***** **         **              **             **   *
  *      **  *     ***     **         **              **             **   *
  *       ** *    **       **         **              **              *  *
  *       ** *   **        **         **              **              ** *
  *        ***   **        **         **              **               * *
  *        ***   **        **         **     *        **     *         **
  *         **   **        **  *      **     *        **     *         **
  *         **    **     ****  *       **   *          **   *          *
*****        *     ******   ***         ****            ****           *
                                                                       *
                                                                      *
                                                                  *****
                                                                  ****


 *
 */




#ifndef __NATTY_USER_PROTOCOL_H__
#define __NATTY_USER_PROTOCOL_H__

#include <stdio.h>

#define HTTP_QRCODE_URL			"http://app.quanjiakan.com/familycare/activate"
#define HTTP_QJK_BASE_URL		"http://app.quanjiakan.com"
#define HTTP_GAODE_BASE_URL		"http://apilocate.amap.com"
#define HTTP_WEATHER_BASE_URL	"http://api.thinkpage.cn"
#define HTTP_GAODE_KEY			"fb44f91d1a1df4d4b6356f43183a329f"
#define HTTP_WEATHER_KEY		"0pyd8z7jouficcil"
#define HTTP_GAODE_RESTAPI_URL  "http://restapi.amap.com"


#define NTY_PACKET_BUFFER_SIZE		992 //32 pkthdr, pkttail


#define NATTY_USER_PROTOCOL_IMEI					"IMEI"
#define NATTY_USER_PROTOCOL_CATEGORY				"Category"
#define NATTY_USER_PROTOCOL_INDEX					"Index"

#define NATTY_USER_PROTOCOL_CATEGORY_AUTHORIZEPUSH	"AuthorizePush"
#define NATTY_USER_PROTOCOL_CATEGORY_AUTHORIZEREPLY	"AuthorizeReply"
#define NATTY_USER_PROTOCOL_CATEGORY_EFENCE			"Efence"
#define NATTY_USER_PROTOCOL_CATEGORY_RUNTIME		"RunTime"
#define NATTY_USER_PROTOCOL_CATEGORY_TURN			"Turn"
#define NATTY_USER_PROTOCOL_CATEGORY_SCHEDULE		"Schedule"
#define NATTY_USER_PROTOCOL_CATEGORY_ADD			"Add"
#define NATTY_USER_PROTOCOL_CATEGORY_DELETE			"Delete"
#define NATTY_USER_PROTOCOL_CATEGORY_UPDATE			"Update"
#define NATTY_USER_PROTOCOL_CATEGORY_SET			"Set"

#define NATTY_USER_PROTOCOL_CATEGORY_TIMETABLES		"TimeTables"
#define NATTY_USER_PROTOCOL_CATEGORY_CONFIG			"Config"
#define NATTY_USER_PROTOCOL_CATEGORY_POWER			"Power"
#define NATTY_USER_PROTOCOL_CATEGORY_SIGNAL			"Signal"
#define NATTY_USER_PROTOCOL_CATEGORY_LOCATION		"Location"
#define NATTY_USER_PROTOCOL_CATEGORY_FARE			"Fare"
#define NATTY_USER_PROTOCOL_CATEGORY_ICCID			"ICCID"
#define NATTY_USER_PROTOCOL_CATEGORY_RESET			"Reset"
#define NATTY_USER_PROTOCOL_CATEGORY_RESTORE		"Restore"



#define NATTY_USER_PROTOCOL_ACTION_SELECT			"Select"




#define NATTY_USER_PROTOCOL_CATEGORY_CONTACTS		"Contacts"


#define NATTY_USER_PROTOCOL_AUTHORIZETYPE	"AuthorizeType"
#define NATTY_USER_PROTOCOL_AGREE			"Agree"
#define NATTY_USER_PROTOCOL_REJECT			"Reject"
#define NATTY_USER_PROTOCOL_BINDCONFIRM		"BindConfirm"
#define NATTY_USER_PROTOCOL_BINDCONFIRMREQ	"BindConfirmReq"
#define NATTY_USER_PROTOCOL_BINDAGREE		"BindAgree"


#define NATTY_USER_PROTOCOL_GPS				"GPS"
#define NATTY_USER_PROTOCOL_STEPSREPORT		"StepsReport"
#define NATTY_USER_PROTOCOL_HEARTREPORT		"HeartReport"


#define NATTY_USER_PROTOCOL_WIFI			"WIFI"
#define NATTY_USER_PROTOCOL_SSID			"SSID"
#define NATTY_USER_PROTOCOL_MAC				"MAC"
#define NATTY_USER_PROTOCOL_V				"V"

#define NATTY_USER_PROTOCOL_LAB				"LAB"
#define NATTY_USER_PROTOCOL_BTS				"Bts"
#define NATTY_USER_PROTOCOL_NEARBTS			"Nearbts"
#define NATTY_USER_PROTOCOL_CELL			"Cell"
#define NATTY_USER_PROTOCOL_SIGNAL			"Signal"

#define NATTY_USER_PROTOCOL_CONFIG			"Config"
#define NATTY_USER_PROTOCOL_POWER			"Power"
#define NATTY_USER_PROTOCOL_STEPS			"Steps"
#define NATTY_USER_PROTOCOL_PHONENUM		"PhoneNum"

#define NATTY_USER_PROTOCOL_RESULTS			"Results"
//#define NATTY_USER_PROTOCOL_RESULT			"Result"
#define NATTY_USER_PROTOCOL_TYPE			"Type"
#define NATTY_USER_PROTOCOL_RADIUS			"Radius"
#define NATTY_USER_PROTOCOL_LOCATION		"Location"
#define NATTY_USER_PROTOCOL_SOSREPORT		"SOSReport"
#define NATTY_USER_PROTOCOL_EFENCEREPORT	"EfenceReport"
#define NATTY_USER_PROTOCOL_WEARSTATUS		"WearStatus"

#define NATTY_USER_PROTOCOL_LOCATIONREPORT	"LocationReport"
#define NATTY_USER_PROTOCOL_STEPSREPORT		"StepsReport"
#define NATTY_USER_PROTOCOL_HEARTREPORT		"HeartReport"

#define NATTY_USER_PROTOCOL_EFENCE			"Efence"
#define NATTY_USER_PROTOCOL_EFENCELIST		"EfenceList"
#define NATTY_USER_PROTOCOL_NUM 			"Num"
#define NATTY_USER_PROTOCOL_POINTS			"Points"

#define NATTY_USER_PROTOCOL_RUNTIME 		"RunTime"
#define NATTY_USER_PROTOCOL_AUTOCONNECTION 	"AutoConnection"
#define NATTY_USER_PROTOCOL_LOSSREPORT 		"LossReport"
#define NATTY_USER_PROTOCOL_LIGHTPANEL 		"LightPanel"
#define NATTY_USER_PROTOCOL_WATCHBELL 		"WatchBell"
#define NATTY_USER_PROTOCOL_TAGETSTEP 		"TagetStep"
#define NATTY_USER_PROTOCOL_MODEL 			"Model"


#define NATTY_USER_PROTOCOL_TURN 			"Turn"
#define NATTY_USER_PROTOCOL_ON 				"On"
#define NATTY_USER_PROTOCOL_OFF 			"Off"
#define NATTY_USER_PROTOCOL_TIME 			"Time"

#define NATTY_USER_PROTOCOL_ID 				"Id"
#define NATTY_USER_PROTOCOL_MSG 			"MSG"
#define NATTY_USER_PROTOCOL_ACTION 			"Action"
#define NATTY_USER_PROTOCOL_SCHEDULE 		"Schedule"
#define NATTY_USER_PROTOCOL_DAILY 			"Daily"
#define NATTY_USER_PROTOCOL_DETAILS 		"Details"

#define NATTY_USER_PROTOCOL_TIMETABLES		"TimeTables"
#define NATTY_USER_PROTOCOL_MORNING 		"Morning"
#define NATTY_USER_PROTOCOL_AFTERNOON 		"Afternoon"
#define NATTY_USER_PROTOCOL_STARTTIME 		"StartTime"
#define NATTY_USER_PROTOCOL_ENDTIME 		"EndTime"

#define NATTY_USER_PROTOCOL_CONTACTS 		"Contacts"
#define NATTY_USER_PROTOCOL_NAME 			"Name"
#define NATTY_USER_PROTOCOL_IMAGE 			"Image"
#define NATTY_USER_PROTOCOL_TELPHONE 		"Tel"
#define NATTY_USER_PROTOCOL_APP 			"App"
#define NATTY_USER_PROTOCOL_ADMIN 			"Admin"


#define NATTY_USER_PROTOCOL_QRCODE 			"QRCode"
#define NATTY_USER_PROTOCOL_URL 			"URL"
#define NATTY_USER_PROTOCOL_ICCID 			"ICCID"
#define NATTY_USER_PROTOCOL_CODE 			"Code"
#define NATTY_USER_PROTOCOL_MESSAGE 		"Message"
#define NATTY_USER_PROTOCOL_STATUS 			"Status"
#define NATTY_USER_PROTOCOL_PHONENUM 		"PhoneNum"

#define NATTY_USER_PROTOCOL_PROPOSER 		"Proposer"
#define NATTY_USER_PROTOCOL_USERNAME 		"UserName"
#define NATTY_USER_PROTOCOL_MSGID 			"MsgId"
#define NATTY_USER_PROTOCOL_ADMINID 		"AdminId"
#define NATTY_USER_PROTOCOL_ANSWER 			"Answer"


#define NATTY_USER_PROTOCOL_BINGREQ 		"BindReq"
#define NATTY_USER_PROTOCOL_BINGREQ_NAME 	"Name"
#define NATTY_USER_PROTOCOL_BINGREQ_PICURL  "PicURL"
#define NATTY_USER_PROTOCOL_BINGREQ_TYPE    "Type"
#define NATTY_USER_PROTOCOL_UNBINGREQ       "UnBindReq"


#define NATTY_USER_PROTOCOL_WATCHNAME 		"WatchName"
#define NATTY_USER_PROTOCOL_WATCHIMAGE 		"WatchImage"
#define NATTY_USER_PROTOCOL_USERIMAGE 		"UserImage"


#define NATTY_AMAP_PROTOCOL_STATUS 			"status"
#define NATTY_AMAP_PROTOCOL_INFO 			"info"
#define NATTY_AMAP_PROTOCOL_INFOCODE 		"infocode"
#define NATTY_AMAP_PROTOCOL_DESC 			"desc"
#define NATTY_AMAP_PROTOCOL_COUNTRY 		"country"
#define NATTY_AMAP_PROTOCOL_CITY 			"city"
#define NATTY_AMAP_PROTOCOL_CITYCODE 		"citycode"
#define NATTY_AMAP_PROTOCOL_ADCODE 			"adcode"
#define NATTY_AMAP_PROTOCOL_ROAD 			"road"
#define NATTY_AMAP_PROTOCOL_STREET 			"street"
#define NATTY_AMAP_PROTOCOL_POI 			"poi"
#define NATTY_AMAP_PROTOCOL_RESULT 			"result"
#define NATTY_AMAP_PROTOCOL_TYPE 			"type"
#define NATTY_AMAP_PROTOCOL_RADIUS 			"radius"
#define NATTY_AMAP_PROTOCOL_LOCATION 		"location"
#define NATTY_AMAP_PROTOCOL_REGEOCODE		"regeocode"
#define NATTY_AMAP_PROTOCOL_FORMATTED_ADDRESS       "formatted_address"
#define NATTY_AMAP_PROTOCOL_ADDRESSCOMPONENT 		"addressComponent"
#define NATTY_AMAP_PROTOCOL_STREETNUMBER 			"streetNumber"
#define NATTY_AMAP_PROTOCOL_DISTANCE 				"distance"


#define NATTY_WEATHER_PROTOCOL_RESULTS 				"results"

#define NATTY_WEATHER_PROTOCOL_LOCATION 			"location"
#define NATTY_WEATHER_PROTOCOL_ID 			 	 	"id"
#define NATTY_WEATHER_PROTOCOL_NAME 			 	"name"
#define NATTY_WEATHER_PROTOCOL_COUNTRY 			 	"country"
#define NATTY_WEATHER_PROTOCOL_PATH 			 	"path"
#define NATTY_WEATHER_PROTOCOL_TIMEZONE 			"timezone"
#define NATTY_WEATHER_PROTOCOL_TIMEZONE_OFFSET 		"timezone_offset"

#define NATTY_WEATHER_PROTOCOL_DAILY 			 	 "daily"
#define NATTY_WEATHER_PROTOCOL_DATE 				 "date"
#define NATTY_WEATHER_PROTOCOL_TEXT_DAY 			 "text_day"
#define NATTY_WEATHER_PROTOCOL_CODE_DAY 			 "code_day"
#define NATTY_WEATHER_PROTOCOL_TEXT_NIGHT 			 "text_night"
#define NATTY_WEATHER_PROTOCOL_CODE_NIGHT 			 "code_night"
#define NATTY_WEATHER_PROTOCOL_HIGH 				 "high"
#define NATTY_WEATHER_PROTOCOL_LOW 					 "low"
#define NATTY_WEATHER_PROTOCOL_PRECIP 				 "precip"
#define NATTY_WEATHER_PROTOCOL_WIND_DIRECTION 		 "wind_direction"
#define NATTY_WEATHER_PROTOCOL_WIND_DIRECTION_DEGREE "wind_direction_degree"
#define NATTY_WEATHER_PROTOCOL_WIND_SPEED 			 "wind_speed"
#define NATTY_WEATHER_PROTOCOL_WIND_SCALE 			 "wind_scale"

#define NATTY_WEATHER_PROTOCOL_LAST_UPDATE 			 "last_update"



typedef struct _WIFIItem {
	const char *SSID;
	const char *MAC;
	const char *V;
} WIFIItem;


typedef struct _WIFIReq {
	const char *IMEI;
	const char *category;
	size_t size;
	WIFIItem *pWIFI;
} WIFIReq, WIFIResult;

typedef struct _WIFIAck {
	WIFIResult result;
} WIFIAck;


typedef struct _Nearbts {
	const char *cell;
	const char *signal;
} Nearbts;

typedef struct _LABItem {
	const char *bts;
	Nearbts *pNearbts;
} LABItem;

typedef struct _LABReq {
	const char *IMEI;
	const char *category;
	size_t size;
	LABItem lab;
} LABReq, LABResult;

typedef struct _LABAck {
	LABResult result;
} LABAck;


typedef struct _AMapResult {
	const char *type;
	const char *location;
	const char *radius;
	const char *desc;
	const char *country;
	const char *province;
	const char *city;
	const char *citycode;
	const char *adcode;
	const char *road;
	const char *street;
	const char *poi;
} AMapResult;

typedef struct _AMap {
	const char *status;
	const char *info;
	const char *infocode;
	AMapResult result;
} AMap;



typedef struct _WeatherLocation {
	const char *id;
	const char *name;
	const char *country;
	const char *path;
	const char *timezone;
	const char *timezone_offset;
} WeatherLocation;

typedef struct _WeatherDaily {
	const char *date;
	const char *text_day;
	const char *code_day;
	const char *text_night;
	const char *code_night;
	const char *high;
	const char *low;
	const char *precip;
	const char *wind_direction;
	const char *wind_direction_degree;
	const char *wind_speed;
	const char *wind_scale;
} WeatherDaily;

typedef struct _WeatherResults {
	WeatherLocation location;
	size_t size;
	WeatherDaily *pDaily;
	const char *last_update;
} WeatherResults;

typedef struct _WeatherReqAck {
	size_t size;
	WeatherResults *pResults;
} WeatherReq, WeatherAck;

typedef struct _WeatherLocationReq {
	const char *IMEI;
    const char *category;
    const char *bts;
} WeatherLocationReq;


typedef struct _ICCIDReq {
	const char *IMEI;
	const char *ICCID;
} ICCIDReq;

typedef struct _ICCIDAck {
	const char *msg;
	const char *IMEI;
	const char *phone_num;
} ICCIDAck;

typedef struct _ICCIDSet {
	const char *IMEI;
	const char *category;
	const char *ICCID;
	const char *phone_num;
} ICCIDSet;

typedef struct _CommonResult {
	const char *code;
	const char *message;
} CommonResult;

typedef struct _CommonAck {
	CommonResult result;
} CommonAck;

typedef struct _CommonReq {
	const char *IMEI;
	const char *action;
	const char *category; //Config  Power  Signal Location Fare
} CommonReq;

typedef struct _CommonReqExtend {
	const char *IMEI;
	const char *action;
	const char *category; //Config  Power  Signal Location Fare
	const char *id;
} CommonReqExtend;

typedef struct _ConfigItem {
	const char *power;
	const char *signal;
	const char *steps;
	const char *phone_num;
	const char *location;
} ConfigItem;

typedef struct _ConfigResults {
	const char *IMEI;
	const char *category;
	ConfigItem config;
} ConfigResults;

typedef struct _ConfigAck {
	ConfigResults results;
} ConfigAck;


typedef struct _PowerResults {
	const char *IMEI;
	const char *category;
	const char *power;
} PowerResults;

typedef struct _PowerAck {
	PowerResults results;
} PowerAck;


typedef struct _SignalResults {
	const char *IMEI;
	const char *category;
	const char *signal;
} SignalResults;

typedef struct _SignalAck {
	SignalResults results;
} SignalAck;


typedef struct _LocationResults {
	const char *IMEI;
	const char *category;
	const char *type;
	const char *radius;
	const char *location;
} LocationResults;

typedef struct _LocationAck {
	LocationResults results;
} LocationAck;


typedef struct _AuthorizePush {
	const char *IMEI;
	const char *category;
	const char *authorize_type;
} AuthorizePush;

typedef struct _AuthorizeReplyResults {
	const char *IMEI;
	const char *category;
	const char *authorize_type;
	const char *answer;
} AuthorizeReplyResults;

typedef struct _AuthorizeReply {
	AuthorizeReplyResults results;
} AuthorizeReply;


typedef struct _EfencePoints {
	const char *point;
} EfencePoints;
typedef struct _EfenceItem {
	const char *num;
	size_t size;
	EfencePoints *pPoints;
} EfenceItem;
typedef struct _AddEfenceReq {
	const char *msg;
	const char *IMEI;
	const char *category;
	const char *action;
	const char *index;
	EfenceItem efence;
} AddEfenceReq, AddEfenceResult;

typedef struct _DelEfenceReq {
	const char *msg;
	const char *IMEI;
	const char *category;
	const char *action;
	const char *index;
} DelEfenceReq, DelEfenceResult;

typedef struct _AddEfenceAck {
	const char *id;
	AddEfenceResult result;
} AddEfenceAck;

typedef struct _DelEfenceAck {
	DelEfenceResult result;
} DelEfenceAck;


typedef struct _RunTimeItem {
	const char *auto_connection;
	const char *loss_report;
	const char *light_panel;
	const char *watch_bell;
	const char *taget_step;
	const char *model;
} RunTimeItem;
typedef struct _RunTimeReq {
	const char *msg;
	const char *IMEI;
	const char *category;
	RunTimeItem runtime;
} RunTimeReq, RunTimeResult;
typedef struct _RunTimeAck {
	RunTimeResult result;
} RunTimeAck;



typedef struct _TurnOn {
	const char *time;
} TurnOn;
typedef struct _TurnOff {
	const char *time;
} TurnOff;
typedef struct _TurnItem {
	const char *status;
	TurnOn on;
	TurnOff off;
} TurnItem;
typedef struct _TurnReq {
	const char *msg;
	const char *IMEI;
	const char *category;
	TurnItem turn;
} TurnReq, TurnResult;
typedef struct _TurnAck {
	TurnResult result;
} TurnAck;



typedef struct _ScheduleItem {
	const char *id;
	const char *daily;
	const char *time;
	const char *details;
	const char *status;
} ScheduleItem;


typedef struct _ScheduleSelectItem {
	 char *id;
	 char *daily;
	 char *time;
	 char *details;
	 char *status;
} ScheduleSelectItem;

typedef struct _AddScheduleReq {
	const char *msg;
	const char *IMEI;
	const char *category;
	const char *action;
	const char *id;
	ScheduleItem schedule;
} AddScheduleReq, AddScheduleResult, DeviceAddScheduleAck;

typedef struct _AddScheduleAck {
	AddScheduleResult result;
} AddScheduleAck;


typedef struct _DelScheduleReq {
	const char *msg;
	const char *IMEI;
	const char *category;
	const char *action;
	const char *id;
} DelScheduleReq, DelScheduleResult;

typedef struct _DelScheduleAck {
	DelScheduleResult result;
} DelScheduleAck;


typedef struct _UpdateScheduleReq {
	const char *msg;
	const char *IMEI;
	const char *category;
	const char *action;
	const char *id;
	ScheduleItem schedule;
} UpdateScheduleReq, UpdateScheduleResult;


typedef struct _UpdateScheduleAck {
	UpdateScheduleResult result;
} UpdateScheduleAck;


typedef struct _ScheduleResults {
	const char *msg;
	const char *IMEI;
	const char *category;
	char *num;
	size_t size;
	size_t index;
	ScheduleItem *pSchedule;
} ScheduleResults;

typedef struct _ScheduleAck {
	ScheduleResults results;
} ScheduleAck;


typedef struct _CommonExtendAck {
	const char *id;
	CommonResult result;
} CommonExtendAck;


typedef struct _Morning {
	const char *status;
	const char *startTime;
	const char *endTime;
} Morning;

typedef struct _Afternoon {
	const char *status;
	const char *startTime;
	const char *endTime;
} Afternoon;

typedef struct _TimeTablesItem {
	const char *id;
	const char *daily;
	Morning morning;
	Afternoon afternoon;
} TimeTablesItem;

typedef struct _TimeTablesReq {
	const char *msg;
	const char *IMEI;
	const char *category;
	size_t size;
	TimeTablesItem *pTimeTables;
} TimeTablesReq, TimeTablesResults;

typedef struct _TimeTablesAck {
	TimeTablesResults results;
} TimeTablesAck;



typedef struct _Contacts {
	const char *id;
	const char *name;
	const char *image;
	const char *telphone;
	//const char *admin;
	//const char *app;
} Contacts;

typedef struct _ContactsResults {
	const char *IMEI;
	const char *category;
	const char *action;
	size_t size;
	Contacts *pContacts;
} ContactsResults;

typedef struct _ContactsAck {
	ContactsResults results;
} ContactsAck;

typedef struct _AddContactsReq {
	const char *msg;
	const char *IMEI;
	const char *category;
	const char *action;
	const char *id;
	Contacts contacts;
} AddContactsReq, AddContactsResults, DeviceAddContactsAck;

typedef struct _DelContactsReq {
	const char *msg;
	const char *IMEI;
	const char *category;
	const char *action;
	const char *id;
} DelContactsReq, DelContactsResults, DeviceDelContactsAck;

typedef struct _UpdateContactsReq {
	const char *msg;
	const char *IMEI;
	const char *category;
	const char *action;
	Contacts contacts;
} UpdateContactsReq, UpdateContactsResults;

typedef struct _AddContactsAck {
	AddContactsResults results;
} AddContactsAck;

typedef struct _UpdateContactsAck {
	UpdateContactsResults results;
} UpdateContactsAck;

typedef struct _DelContactsAck {
	DelContactsResults results;
} DelContactsAck;


typedef struct _BindItem {
	const char *watchName;
	const char *watchImage;
	const char *userName;
	const char *userImage;
} BindItem;

typedef struct _BindReq {
	const char *IMEI;
	const char *category;
	const char *action;
	BindItem bind;
} BindReq;

/*
typedef struct _BindResult {
	const char *IMEI;
	const char *proposer;
	const char *userName;
	const char *msgId;
} BindResult;

typedef struct _BindAck {
	BindResult results;
} BindAck;
*/

typedef struct _BindConfirmResult {
	const char *IMEI;
	const char *proposer;
	const char *userName;
	const char *msgId;
} BindConfirmResult;

typedef struct _BindConfirmPush {
	BindConfirmResult result;
} BindConfirmPush;

typedef struct _BindConfirmReq {
	const char *IMEI;
	const char *category;
	const char *answer;
	const char *msgId;
} BindConfirmReq;

typedef struct _BindBroadCastResult {
	const char *IMEI;
	const char *category;
	const char *proposer;
	const char *answer;
} BindBroadCastResult;

typedef struct BindBroadCast{
	BindBroadCastResult result;
} BindBroadCast;

typedef struct _BindConfirmAck {
	const char *IMEI;
	const char *category;
	const char *answer;
	const char *msgId;
} BindConfirmAck;

typedef struct _BindAgreeAck {
	const char *IMEI;
	const char *category;
	const char *adminId;
	const char *msgId;
} BindAgreeAck;


typedef struct _OfflineMsgResult {
	const char *category;
} OfflineMsgResult;


typedef struct _OfflineMsgReq {
	OfflineMsgResult results;
} OfflineMsgReq;


typedef struct _CommonOfflineMsg {
	int msgId;
	long long senderId;
	long long groupId;
	char *details;
	long timeStamp;
} CommonOfflineMsg;

typedef CommonOfflineMsg nOfflineMsg;


typedef struct _BindOfflineMsgToAdmin {
	long msgId;
	long long admin;
	long long proposer;
	long long IMEI;
	char *watchName;
	char *watchImage;
	char *userName;
	char *userImage;
} BindOfflineMsgToAdmin;

typedef struct _BindOfflineMsgToProposer {
	long long IMEI;
	long long admin;
	long long proposer;
	const char *details;
} BindOfflineMsgToProposer;


typedef struct _SOSReportItem {
	const char *type;
	const char *radius;
	const char *location;
} SOSReportItem;

typedef struct _SOSReportResults {
	const char *IMEI;
	const char *category;
	SOSReportItem sosReport;
} SOSReportResults;

typedef struct _SOSReport {
	SOSReportResults results;
} SOSReport;



typedef struct _LocationReportItem {
	const char *type;		// 4
	const char *location;	// 113.2408968,23.1318213
	const char *radius;		// 550
	const char *desc;		// Guangdong Shenzhen Liwan Zhoumenbeilu KaojinGuangzhouLiWanKeJiYuan
	const char *country;	// China
	const char *province;	// province
	const char *city;		// city
	const char *citycode;	// 020
	const char *adcode;		// 440103
	const char *road;		// road
	const char *street;		// street
	const char *poi;		// poi
} LocationReportItem;

typedef struct _LocationReportResults {
	const char *IMEI;
	const char *category;
	LocationReportItem locationReport;
} LocationReportResults;

typedef struct _LocationReport {
	LocationReportResults results;
} LocationReport;



typedef struct _StepsReportResults {
	const char *IMEI;
	const char *category;
	const char *stepsReport;
	const char *time;
} StepsReportResults;

typedef struct _StepsReport {
	StepsReportResults results;
} StepsReport;



typedef struct _HeartReportResults {
	const char *IMEI;
	const char *category;
	const char *heartReport;
	const char *time;
} HeartReportResults;

typedef struct _HeartReport {
	HeartReportResults results;
} HeartReport;


// add by luoyb add begin
typedef struct _LocatorBindReq{
	const char *IMEI;
	const char *Category;
	const char *Name;
	const char *PicURL;
	const char *Type;
}LocatorBindReq;
//client user send select request
typedef struct _ClientSelectReq{
	const char *IMEI;
	const char *Category;
	const char *Action;
}ClientSelectReq;

typedef struct _ClientContactsAckItem{
	 char *Admin;
	 char *App;
	 char *Id;
	 char *Image;
	 char *Name;
	 char *Tel;
}ClientContactsAckItem;
typedef struct _ClientContactsAck{
	const char *IMEI;
	const char *Category;	
	char *Num;
	size_t size;
	size_t index;
	ClientContactsAckItem *objClientContactsAckItem;
}ClientContactsAck;

typedef struct _ClientTurnAckItem{
	 char *Status;
	 char *On;
	 char *Off;
}ClientTurnAckItem;
typedef struct _ClientTurnAck{
	const char *IMEI;
	const char *Category;
	ClientTurnAckItem *objClientTurnAckItem;
}ClientTurnAck;

typedef struct _ClientRunTimeAckItem{
	 char *AutoConnection;
	 char *LossReport;
	 char *LightPanel;
	 char *WatchBell;
	 char *TagetStep;
	 char *Model;
}ClientRunTimeAckItem;
typedef struct _ClientRunTimeAck{
	const char *IMEI;
	const char *Category;	
	ClientRunTimeAckItem *objClientRunTimeAckItem;
}ClientRunTimeAck;

typedef struct _ClientTimeTablesAckItem{
	 char *Daily;
	 char *Morning;
	 char *MorningTurn;
	 char *Afternoon;
	 char *AfternoonTurn;
}ClientTimeTablesAckItem;
typedef struct _ClientTimeTablesAck{
	const char *IMEI;
	const char *Category;
	size_t size;
	size_t index;
	ClientTimeTablesAckItem *objClientTimeTablesAckItem;
}ClientTimeTablesAck;

typedef struct _ClientLocationAckResults{
	 int Type;
	 char *Radius;
	 char *Location;
}ClientLocationAckResults;

typedef struct _ClientLocationAck{
	const char *IMEI;
	const char *Category;
	ClientLocationAckResults *results;
}ClientLocationAck;





typedef struct _ClientEfenceListItem{
	 char *index;
	 char *num;
	 char *points;
}ClientEfenceListItem;

typedef struct _ClientEfenceResult{
	const char *IMEI;
	const char *category;	
	size_t efencelist_size;
	size_t index;
	ClientEfenceListItem *pClientEfenceListItem;
}ClientEfenceResults;

typedef struct _ClientEfenceAck{
	ClientEfenceResults results;
}ClientEfenceAck;


typedef struct _ClientURLAckItem{
	const char *QRCode;
}ClientURLAckItem;

typedef struct _ClientURLAck{
	const char *IMEI;
	const char *Category;
	ClientURLAckItem objClientURLAckItem;
}ClientURLAck;


//add end

#endif



