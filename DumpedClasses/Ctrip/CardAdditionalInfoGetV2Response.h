//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, ShortUrlInformationModel, WayInformationModel;

@interface CardAdditionalInfoGetV2Response : CTBusinessBean
{
    int result;
    ShortUrlInformationModel *shortUrlsModel;
    NSString *weChatUrl;
    WayInformationModel *wayModel;
    NSString *commentWrittingUrl;
}

@property(copy, nonatomic) NSString *commentWrittingUrl; // @synthesize commentWrittingUrl;
@property(retain, nonatomic) WayInformationModel *wayModel; // @synthesize wayModel;
@property(copy, nonatomic) NSString *weChatUrl; // @synthesize weChatUrl;
@property(retain, nonatomic) ShortUrlInformationModel *shortUrlsModel; // @synthesize shortUrlsModel;
@property(nonatomic) int result; // @synthesize result;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end
