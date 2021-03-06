//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface UMSocialImageCellIconView : UIButton
{
    id <UMSocialHandlePlatformTypeDelegate> _handlePlatformTypeDelegate;
    UIButton *_iconView;
    UIButton *_backgroudView;
}

@property(retain, nonatomic) UIButton *backgroudView; // @synthesize backgroudView=_backgroudView;
@property(retain, nonatomic) UIButton *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <UMSocialHandlePlatformTypeDelegate> handlePlatformTypeDelegate; // @synthesize handlePlatformTypeDelegate=_handlePlatformTypeDelegate;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)relayoutSubviewWithBackgroudType:(unsigned long long)arg1 withImage:(id)arg2 withMaxItemIconWidth:(double)arg3 withMaxItemIconHeight:(double)arg4;
- (void)createSubView;
- (void)handleSelfBTN:(id)arg1;
- (void)handleClickIconView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

