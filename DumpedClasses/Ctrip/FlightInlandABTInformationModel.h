//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightInlandABTInformationModel : CTBusinessBean
{
    NSString *experimentNo;
    NSString *version;
    NSString *extentInfo;
}

@property(copy, nonatomic) NSString *extentInfo; // @synthesize extentInfo;
@property(copy, nonatomic) NSString *version; // @synthesize version;
@property(copy, nonatomic) NSString *experimentNo; // @synthesize experimentNo;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end
