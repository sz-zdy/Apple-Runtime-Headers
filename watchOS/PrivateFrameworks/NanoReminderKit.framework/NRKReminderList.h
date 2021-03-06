//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EKCalendar, NRKReminderStore, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface NRKReminderList : NSObject
{
    NSMutableDictionary *_remindersWithChangedCompletedStates;
    _Bool _isScheduledReminderList;
    _Bool _listAdjustedForChangedReminders;
    NSString *_listId;
    unsigned int _parentIndex;
    id _clientLinkage;
    int _firstCompletedIndex;
    NSMutableDictionary *_completedChangedRemindersStates;
    NSArray *_reminderArray;
    NSMutableArray *_hiddenReminderArray;
    NRKReminderStore *_storeParent;
    EKCalendar *_eKCalendar;
    unsigned int _count;
}

+ (id)_findOutOfOrderRemindersFromUncompleted:(id)arg1 andCompleted:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic, getter=isListAdjustedForChangedReminders) _Bool listAdjustedForChangedReminders; // @synthesize listAdjustedForChangedReminders=_listAdjustedForChangedReminders;
@property(nonatomic) unsigned int count; // @synthesize count=_count;
@property(retain, nonatomic) EKCalendar *eKCalendar; // @synthesize eKCalendar=_eKCalendar;
@property(nonatomic) __weak NRKReminderStore *storeParent; // @synthesize storeParent=_storeParent;
@property(retain, nonatomic) NSMutableArray *hiddenReminderArray; // @synthesize hiddenReminderArray=_hiddenReminderArray;
@property(retain, nonatomic) NSArray *reminderArray; // @synthesize reminderArray=_reminderArray;
@property(copy) NSMutableDictionary *completedChangedRemindersStates; // @synthesize completedChangedRemindersStates=_completedChangedRemindersStates;
@property(nonatomic) int firstCompletedIndex; // @synthesize firstCompletedIndex=_firstCompletedIndex;
@property(nonatomic) _Bool isScheduledReminderList; // @synthesize isScheduledReminderList=_isScheduledReminderList;
@property(retain, nonatomic) id clientLinkage; // @synthesize clientLinkage=_clientLinkage;
@property(nonatomic) unsigned int parentIndex; // @synthesize parentIndex=_parentIndex;
@property(retain, nonatomic) NSString *listId; // @synthesize listId=_listId;
- (id)ungatedReminderParentObjectID:(id)arg1 andDueDate:(id)arg2;
- (id)ungatedReminderByIdentifier:(id)arg1;
- (void)_fixupRemindersParentRefs;
- (void)_setValueUsingBlock:(CDUnknownBlockType)arg1 commitImmediate:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)dayDateFromComponents:(id)arg1;
- (void)insertReminderByChronologicalOrder:(id)arg1 intoArray:(id)arg2 usingDate:(id)arg3 sortOrder:(int)arg4 andDueOrCompletionDate:(_Bool)arg5;
- (id)findFakeCompletionDateForReminder:(id)arg1;
- (void)insertReminderByDisplayOrder:(id)arg1 intoArray:(id)arg2 withOverrideDisplayOrder:(int)arg3;
- (void)moveReminder:(id)arg1 fromUncompletedToCompleted:(_Bool)arg2 uncompletedArray:(id)arg3 completedArray:(id)arg4 forChangedState:(id)arg5;
- (void)_fixupListChangedCompletedStateForRecurringCompletions;
- (void)produceReminderArraysForAdjustment:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_populateReminderArraysUncompleted:(id *)arg1 completed:(id *)arg2;
- (void)adjustListForChangedRemindersUnlocked:(_Bool)arg1;
- (void)adjustListForChangedReminders:(_Bool)arg1;
- (id)getRemindersWithChangedCompletedStates;
- (void)stashCurrentReminderCompletedStateForIminentStateChange:(_Bool)arg1 onReminder:(id)arg2;
- (void)setRemindersWithChangedCompletedStates:(id)arg1;
- (id)getMutableRemindersWithCompletedState:(unsigned int)arg1;
- (id)getRemindersWithCompletedState:(unsigned int)arg1;
- (void)updateForCurrentTime;
- (id)reminderByIndex:(unsigned int)arg1;
- (void)deleteAllRemindersWithCompletion:(CDUnknownBlockType)arg1;
- (void)rollback;
- (void)setListColor:(struct CGColor *)arg1 commitImmediate:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)deleteReminder:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)reminderByIdentifier:(id)arg1;
- (void)enumerateRemindersUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned int uncompletedCount;
@property(readonly, nonatomic) unsigned int completedCount;
@property(readonly, nonatomic) NSString *description;
@property(readonly, nonatomic) NSString *title;
- (id)_getLocalBundle;
- (struct CGColor *)copyListColor;
- (id)initWithStoreParent:(id)arg1 listId:(id)arg2;
- (id)initWithReminderArray:(id)arg1 storeParent:(id)arg2 eKCalendar:(id)arg3 listId:(id)arg4;

@end

