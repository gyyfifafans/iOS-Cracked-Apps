//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightCustomerIDCardOperateItemModel : CTBusinessBean
{
    int _iDCardType;
    int _flag;
    int _operateType;
    NSString *_iDCardNo;
    NSString *_iDCardTimelimit;
}

@property(nonatomic) int operateType; // @synthesize operateType=_operateType;
@property(nonatomic) int flag; // @synthesize flag=_flag;
@property(copy, nonatomic) NSString *iDCardTimelimit; // @synthesize iDCardTimelimit=_iDCardTimelimit;
@property(copy, nonatomic) NSString *iDCardNo; // @synthesize iDCardNo=_iDCardNo;
@property(nonatomic) int iDCardType; // @synthesize iDCardType=_iDCardType;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end
