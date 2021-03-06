//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FMSubLabelStyleProtocal.h"

@class FMItemTimeCountDownView, UILabel;

@interface FMItemTimeCountDownViewForAuction : UIView <FMSubLabelStyleProtocal>
{
    UILabel *_prefixLabel;
    UILabel *_suffixLabel;
    UIView *_leftBlank;
    UIView *_rightBlank;
    FMItemTimeCountDownView *_timeLabel;
}

@property(retain, nonatomic) FMItemTimeCountDownView *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIView *rightBlank; // @synthesize rightBlank=_rightBlank;
@property(retain, nonatomic) UIView *leftBlank; // @synthesize leftBlank=_leftBlank;
@property(retain, nonatomic) UILabel *suffixLabel; // @synthesize suffixLabel=_suffixLabel;
@property(retain, nonatomic) UILabel *prefixLabel; // @synthesize prefixLabel=_prefixLabel;
- (void).cxx_destruct;
- (void)setSubLabelTextStyle:(id)arg1;
- (void)bindComponent:(id)arg1;
- (void)updateConstraints;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

