//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSTouchBarCustomizationCursorManager;

@protocol NSTouchBarCustomizationCursorManagerDelegate
- (void)cursorManagerDidExitTouchBar:(NSTouchBarCustomizationCursorManager *)arg1 atScreenLocation:(struct CGPoint)arg2 cancelled:(BOOL)arg3;
- (struct CGPoint)cursorManager:(NSTouchBarCustomizationCursorManager *)arg1 didMoveTouchBarCursorToPoint:(struct CGPoint)arg2 withDelta:(struct CGSize)arg3 mouseIsDown:(BOOL)arg4;
- (struct CGPoint)cursorManager:(NSTouchBarCustomizationCursorManager *)arg1 didMouseUpInTouchBarAtPoint:(struct CGPoint)arg2;
- (void)cursorManager:(NSTouchBarCustomizationCursorManager *)arg1 didMouseDownInTouchBarAtPoint:(struct CGPoint)arg2;
- (struct CGPoint)cursorManager:(NSTouchBarCustomizationCursorManager *)arg1 didEnterTouchBarAtPoint:(struct CGPoint)arg2 mouseIsDown:(BOOL)arg3;
- (BOOL)cursorManager:(NSTouchBarCustomizationCursorManager *)arg1 shouldEnterTouchBarAtPoint:(struct CGPoint)arg2 isDragging:(BOOL)arg3;
@end

