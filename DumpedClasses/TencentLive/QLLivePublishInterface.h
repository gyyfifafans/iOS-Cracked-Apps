//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QLAppLiveCommentBaseInfo;

@interface QLLivePublishInterface : NSObject
{
    int _userType;
    int _sence;
    id _delegate;
    QLAppLiveCommentBaseInfo *_commentInfo;
    long long _postType;
    NSString *_commentKey;
    NSString *_externCommentKey;
    unsigned long long _optionType;
}

+ (void)retrySendComment:(id)arg1;
+ (int)liveUserTypeWithUserProfile:(long long)arg1;
@property(nonatomic) unsigned long long optionType; // @synthesize optionType=_optionType;
@property(retain, nonatomic) NSString *externCommentKey; // @synthesize externCommentKey=_externCommentKey;
@property(retain, nonatomic) NSString *commentKey; // @synthesize commentKey=_commentKey;
@property(nonatomic) int sence; // @synthesize sence=_sence;
@property(nonatomic) int userType; // @synthesize userType=_userType;
@property(nonatomic) long long postType; // @synthesize postType=_postType;
@property(retain, nonatomic) QLAppLiveCommentBaseInfo *commentInfo; // @synthesize commentInfo=_commentInfo;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendDeleteComment;
- (void)sendReportComment;
- (void)sendLikeComment;
- (void)didClickPhotoBtn;
- (void)didClickSendBtn:(id)arg1 picArr:(id)arg2 location:(id)arg3;
- (void)commentFuncViewDidPressSendButton:(id)arg1 photos:(id)arg2;
- (void)inputViewDidPressSendButton:(id)arg1;
- (id)init;

@end
