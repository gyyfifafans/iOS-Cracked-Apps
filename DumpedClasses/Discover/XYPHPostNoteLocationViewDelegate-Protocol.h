//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIButton, XYPHPostModelLocation, XYPHPostNoteLocationView;

@protocol XYPHPostNoteLocationViewDelegate <NSObject>

@optional
- (void)postNoteLocationView:(XYPHPostNoteLocationView *)arg1 didAddLocationButtonTouchUpInside:(UIButton *)arg2;
- (void)postNoteLocationView:(XYPHPostNoteLocationView *)arg1 didSelectedLocationChange:(XYPHPostModelLocation *)arg2;
@end
