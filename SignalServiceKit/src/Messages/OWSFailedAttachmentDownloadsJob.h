//
//  Copyright (c) 2018 Open Whisper Systems. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

@class OWSStorage;
@class TSStorageManager;

@interface OWSFailedAttachmentDownloadsJob : NSObject

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithStorageManager:(TSStorageManager *)storageManager NS_DESIGNATED_INITIALIZER;

- (void)run;

/**
 * Database extensions required for class to work.
 */
+ (void)asyncRegisterDatabaseExtensionsWithStorageManager:(OWSStorage *)storage;

/**
 * Only use the sync version for testing, generally we'll want to register extensions async
 */
- (void)blockingRegisterDatabaseExtensions;

@end

NS_ASSUME_NONNULL_END
