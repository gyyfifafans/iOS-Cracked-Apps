//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CTFlightCommUtil : NSObject
{
}

+ (id)positionInformationModel;
+ (long long)commpartTimeStart:(id)arg1 endTime:(id)arg2;
+ (void)setFlightRecommendPackageFreeStrWith:(id)arg1 packageDataModel:(id)arg2;
+ (id)getFlightBundleListWithBundleSaleType:(long long)arg1 bundleSaleList:(id)arg2;
+ (void)setFlightBundleListPriceDataModelWith:(id)arg1 bundleSaleModelList:(id)arg2 departDate:(id)arg3 priceDataModel:(id)arg4;
+ (id)getFlightBundleListContainSameModelList:(id)arg1 returnPolicyModel:(id)arg2;
+ (id)getFlightFreeActivityListWith:(id)arg1 returnPolicyModel:(id)arg2;
+ (float)tranDeviceHeight:(float)arg1 withSize:(float)arg2;
+ (id)getFlightCityIdWithCode:(id)arg1;
+ (id)getFlightStringWith:(id)arg1;
+ (id)getCombinedExtendParamsWithPackageList:(id)arg1;
+ (void)resetSelectedStatuesWithPassengerID:(int)arg1;
+ (_Bool)isPassengerAddToCheckedList:(id)arg1 personModel:(id)arg2;
+ (id)getFlightOrderDetailTestUrl:(int)arg1;
+ (_Bool)logUrlSchemaNullRecodeWith:(id)arg1 keyList:(id)arg2;
+ (id)getAttributedStringWithArray:(id)arg1 labelType:(long long)arg2 lineSpacing:(double)arg3;
+ (void)calculateThreeChooseOneDiscountWithPolicyModel:(id)arg1;
+ (_Bool)isFlightPackageDifPrice:(id)arg1 otherPriceModel:(id)arg2;
+ (_Bool)isFlightPackagePriceNotAllSame:(id)arg1;
+ (void)setIntFlightPackageDataSaveToModel:(id)arg1 passengerList:(id)arg2 packageViewModel:(id)arg3 departDate:(id)arg4 adultsCount:(long long)arg5 childrenCount:(long long)arg6 babyCount:(long long)arg7;
+ (void)setFlightPackageDataSaveToModel:(id)arg1 passengerList:(id)arg2 packageViewModel:(id)arg3 departDate:(id)arg4;
+ (id)getSpaceTimeStrWithStartTime:(id)arg1 endTime:(id)arg2;
+ (id)getFlightPackageViewModelWithPackageType:(int)arg1 packageList:(id)arg2;
+ (id)getAverageRebatePriceWithAdultsRebateModel:(id)arg1 childerenRebateModel:(id)arg2 babyRebateModel:(id)arg3 adultsCount:(long long)arg4 childrenCount:(long long)arg5 babyCount:(long long)arg6;
+ (id)getH5BaseURLByType:(id)arg1;
+ (id)getFlightorderDetailExternUrlWith:(long long)arg1 operationType:(int)arg2 backToFlightHome:(_Bool)arg3 url:(id)arg4;
+ (id)getFlightOrderdetailUrlWith:(id)arg1 orderID:(long long)arg2 operationType:(int)arg3 backToFlightHome:(_Bool)arg4;
+ (int)getStayTimeRetInt:(id)arg1 arriveTime:(id)arg2;
+ (id)getStayTimeInt:(id)arg1 arriveTime:(id)arg2;
+ (id)verifySBCCardNo:(id)arg1;
+ (_Bool)isValidSBCWithString:(id)arg1;
+ (_Bool)isValidENName4Flight:(id)arg1;
+ (id)verifyNameEN:(id)arg1 isNotEmpty:(_Bool)arg2;
+ (id)getAgeLimitInfoWithLimit:(id)arg1;
+ (long long)isNationalityValidWithNationality:(id)arg1 whiteList:(id)arg2 blackList:(id)arg3;
+ (_Bool)isAgeValidWithBirthday:(id)arg1 firstDepartDate:(id)arg2 lastDepartDate:(id)arg3 limit:(id)arg4;
+ (id)getOrderTypeName:(int)arg1;
+ (id)getClassGradeNameWithGrade:(int)arg1;
+ (int)getBundleSaleTypeWithServicePackageType:(int)arg1;
+ (id)getTruncatedNameForPayment:(id)arg1;
+ (id)getBundleSalePriceWithBundleSaleArray:(id)arg1;
+ (id)getTimeAfterSeconds:(int)arg1 fromTime:(id)arg2;
+ (id)getLastBuyBundleSaleRecordDataWithItemKey:(id)arg1 isInland:(_Bool)arg2;
+ (void)saveLastBuyBundleSaleToRecordWithBundleSaleArray:(id)arg1 itemKey:(id)arg2 isInland:(_Bool)arg3;
+ (_Bool)isNeedSendFirstTicketRequest;
+ (_Bool)hadSystemsBuyTickets;
+ (void)saveSystemsFirstBuyTicketInfo:(id)arg1 isFirst:(_Bool)arg2;
+ (_Bool)isFirstBuyTicket;
+ (_Bool)getBoolValueWithkeyStr:(id)arg1;
+ (void)saveBoolWith:(_Bool)arg1 KeyStr:(id)arg2;
+ (void)saveBuyTickerUserID:(id)arg1;
+ (_Bool)hadFirstBuyTicketWith;
+ (id)getfirstBuyUserID;
+ (id)getFlightCalendarLastDate:(id)arg1 isInland:(_Bool)arg2 calendar:(id)arg3;
+ (id)getFlightCalendarLastDate:(id)arg1 isInland:(_Bool)arg2;
+ (id)getFlightCalendarLastDate:(id)arg1 isInland:(_Bool)arg2 timezone:(id)arg3;
+ (int)getFlightCalendarMonths:(_Bool)arg1;
+ (id)getRecommendStr:(id)arg1;
+ (id)getDefaultPassengerCardWithListFromDetailGo:(id)arg1 listFromDetailReturn:(id)arg2;
+ (id)transferTocustomerInfoStringWithDictionary:(id)arg1;
+ (void)getPersonWidgetShowListWithDetailListGo:(id)arg1 detailListReturn:(id)arg2 passengerList:(id)arg3;
+ (void)getPersonWidgetShowListWithPassengerNode:(id)arg1 detailListGo:(id)arg2 detailListReturn:(id)arg3;
+ (id)getAirlinePassengerListWithDetailList:(id)arg1 passengerNode:(id)arg2;
+ (int)getFlightOperationCode4Payment:(int)arg1;
+ (id)getFlightMinuteSecondString:(id)arg1;
+ (id)getMMDDFromDateString:(id)arg1;
+ (id)getWeekDayByDate:(id)arg1;
+ (id)getDescStringWithList:(id)arg1;
+ (id)convertMinutesToShowTimeStr:(int)arg1;
+ (id)convertMinutesToEngLishTimeStr:(int)arg1;
+ (id)getDiscountRateTextForShow:(id)arg1;
+ (id)getObjectForKeyFromMapWithUrlData:(id)arg1 key:(id)arg2;
+ (id)getSimpleGradeNameFromFlightGradeEnum:(int)arg1;
+ (id)getClassGradeFromFlightGradeEnum:(int)arg1;

@end

