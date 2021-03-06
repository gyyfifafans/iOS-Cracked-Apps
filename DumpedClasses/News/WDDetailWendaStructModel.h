//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSNumber, NSString<Optional>, WDDetailPermStructModel;

@interface WDDetailWendaStructModel : WDBaseModel
{
    NSNumber *_ansid;
    NSNumber *_ans_count;
    NSNumber *_digg_count;
    NSNumber *_brow_count;
    WDDetailPermStructModel *_perm;
    NSNumber *_is_ban_comment;
    NSNumber *_is_concern_user;
    NSNumber *_is_digg;
    NSNumber *_is_answer_delete;
    NSNumber *_is_question_delete;
    NSNumber *_bury_count;
    NSNumber *_is_buryed;
    NSNumber *_is_show_bury;
    NSString<Optional> *_edit_answer_url;
}

@property(retain, nonatomic) NSString<Optional> *edit_answer_url; // @synthesize edit_answer_url=_edit_answer_url;
@property(retain, nonatomic) NSNumber *is_show_bury; // @synthesize is_show_bury=_is_show_bury;
@property(retain, nonatomic) NSNumber *is_buryed; // @synthesize is_buryed=_is_buryed;
@property(retain, nonatomic) NSNumber *bury_count; // @synthesize bury_count=_bury_count;
@property(retain, nonatomic) NSNumber *is_question_delete; // @synthesize is_question_delete=_is_question_delete;
@property(retain, nonatomic) NSNumber *is_answer_delete; // @synthesize is_answer_delete=_is_answer_delete;
@property(retain, nonatomic) NSNumber *is_digg; // @synthesize is_digg=_is_digg;
@property(retain, nonatomic) NSNumber *is_concern_user; // @synthesize is_concern_user=_is_concern_user;
@property(retain, nonatomic) NSNumber *is_ban_comment; // @synthesize is_ban_comment=_is_ban_comment;
@property(retain, nonatomic) WDDetailPermStructModel *perm; // @synthesize perm=_perm;
@property(retain, nonatomic) NSNumber *brow_count; // @synthesize brow_count=_brow_count;
@property(retain, nonatomic) NSNumber *digg_count; // @synthesize digg_count=_digg_count;
@property(retain, nonatomic) NSNumber *ans_count; // @synthesize ans_count=_ans_count;
@property(retain, nonatomic) NSNumber *ansid; // @synthesize ansid=_ansid;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

