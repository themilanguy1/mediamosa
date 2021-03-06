<?php
/**
 * @file
 * MediaMosa support for Metadata type Asset.
 */

/**
 * Extend on the metadata property group for future.
 */
class mediamosa_metadata_asset extends mediamosa_asset_metadata_property_group {

  const METADATA_PROPERTY_GROUP_NAME = 'asset';

  // Property list (core).
  const TAG = 'tag';
  const PUBLISHED = 'published';
  const TRASHCAN = 'trashcan';
  const TRASHCAN_DATE = 'trashcan_date';
}
