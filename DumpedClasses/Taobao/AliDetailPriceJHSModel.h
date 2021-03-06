//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliDetailComponentModel.h"

@class AliDetailJhsGlobalInfoModel, AliDetailPriceEntity, NSArray, NSArray<AliDetailJhsGoodsWayDescModel>;

@interface AliDetailPriceJHSModel : AliDetailComponentModel
{
    _Bool _isMultiSku;
    _Bool _canBuy;
    _Bool _isMeiLiHuiItem;
    AliDetailPriceEntity *_price;
    AliDetailPriceEntity *_extraPrice;
    long long _soldCount;
    long long _remindCount;
    long long _baseTime;
    unsigned long long _itemDisplayStatus;
    unsigned long long _itemType;
    AliDetailJhsGlobalInfoModel *_globalInfo;
    NSArray<AliDetailJhsGoodsWayDescModel> *_goodsWayDesc;
    NSArray *_tags;
}

@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSArray<AliDetailJhsGoodsWayDescModel> *goodsWayDesc; // @synthesize goodsWayDesc=_goodsWayDesc;
@property(retain, nonatomic) AliDetailJhsGlobalInfoModel *globalInfo; // @synthesize globalInfo=_globalInfo;
@property(nonatomic) _Bool isMeiLiHuiItem; // @synthesize isMeiLiHuiItem=_isMeiLiHuiItem;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(nonatomic) unsigned long long itemDisplayStatus; // @synthesize itemDisplayStatus=_itemDisplayStatus;
@property(nonatomic) _Bool canBuy; // @synthesize canBuy=_canBuy;
@property(nonatomic) long long baseTime; // @synthesize baseTime=_baseTime;
@property(nonatomic) long long remindCount; // @synthesize remindCount=_remindCount;
@property(nonatomic) long long soldCount; // @synthesize soldCount=_soldCount;
@property(nonatomic) _Bool isMultiSku; // @synthesize isMultiSku=_isMultiSku;
@property(retain, nonatomic) AliDetailPriceEntity *extraPrice; // @synthesize extraPrice=_extraPrice;
@property(retain, nonatomic) AliDetailPriceEntity *price; // @synthesize price=_price;
- (void).cxx_destruct;
- (void)parseDataFromDetailModel:(id)arg1;

@end

