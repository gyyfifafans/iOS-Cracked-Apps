//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class MSTOCKPRODStockQuoteInfo, NSDictionary;

@interface StockFavOrder : NSObject <NSCoding>
{
    long long _operation;
    MSTOCKPRODStockQuoteInfo *_stockInfo;
    NSDictionary *_params;
}

@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) MSTOCKPRODStockQuoteInfo *stockInfo; // @synthesize stockInfo=_stockInfo;
@property(nonatomic) long long operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

