//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <PhotosUICore/PXVideoOverlayButton-Protocol.h>

@interface PXFlatVideoOverlayButton : UIButton <PXVideoOverlayButton>
{
    long long _style;
    id _target;
    SEL _action;
    BOOL _showAsPause;
    BOOL __didConfigureForPause;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setDidConfigureForPause:) BOOL _didConfigureForPause; // @synthesize _didConfigureForPause=__didConfigureForPause;
@property(nonatomic) BOOL showAsPause; // @synthesize showAsPause=_showAsPause;
- (void)_handleTap:(id)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (long long)style;
- (id)initWithStyle:(long long)arg1;

@end

