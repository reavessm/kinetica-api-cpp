/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __GPUDBPROTOCOL_H__
#define __GPUDBPROTOCOL_H__

#include <avro/Specific.hh>

#include "gpudb_wrapper.h"
#include "admin_alter_jobs.h"
#include "admin_offline.h"
#include "admin_show_alerts.h"
#include "admin_show_jobs.h"
#include "admin_show_shards.h"
#include "admin_shutdown.h"
#include "admin_verify_db.h"
#include "aggregate_convex_hull.h"
#include "aggregate_group_by.h"
#include "aggregate_histogram.h"
#include "aggregate_k_means.h"
#include "aggregate_min_max.h"
#include "aggregate_min_max_geometry.h"
#include "aggregate_statistics.h"
#include "aggregate_statistics_by_range.h"
#include "aggregate_unique.h"
#include "aggregate_unpivot.h"
#include "alter_system_properties.h"
#include "alter_table.h"
#include "alter_table_metadata.h"
#include "alter_user.h"
#include "append_records.h"
#include "clear_table.h"
#include "clear_table_monitor.h"
#include "clear_trigger.h"
#include "create_job.h"
#include "create_join_table.h"
#include "create_materialized_view.h"
#include "create_proc.h"
#include "create_projection.h"
#include "create_role.h"
#include "create_table.h"
#include "create_table_monitor.h"
#include "create_trigger_by_area.h"
#include "create_trigger_by_range.h"
#include "create_type.h"
#include "create_union.h"
#include "create_user_external.h"
#include "create_user_internal.h"
#include "delete_proc.h"
#include "delete_records.h"
#include "delete_role.h"
#include "delete_user.h"
#include "execute_proc.h"
#include "filter.h"
#include "filter_by_area.h"
#include "filter_by_area_geometry.h"
#include "filter_by_box.h"
#include "filter_by_box_geometry.h"
#include "filter_by_geometry.h"
#include "filter_by_list.h"
#include "filter_by_radius.h"
#include "filter_by_radius_geometry.h"
#include "filter_by_range.h"
#include "filter_by_series.h"
#include "filter_by_string.h"
#include "filter_by_table.h"
#include "filter_by_value.h"
#include "get_job.h"
#include "get_records.h"
#include "get_records_by_column.h"
#include "get_records_by_series.h"
#include "get_records_from_collection.h"
#include "grant_permission_system.h"
#include "grant_permission_table.h"
#include "grant_role.h"
#include "has_proc.h"
#include "has_table.h"
#include "has_type.h"
#include "insert_records.h"
#include "insert_records_random.h"
#include "insert_symbol.h"
#include "kill_proc.h"
#include "lock_table.h"
#include "merge_records.h"
#include "admin_replace_tom.h"
#include "revoke_permission_system.h"
#include "revoke_permission_table.h"
#include "revoke_role.h"
#include "show_proc.h"
#include "show_proc_status.h"
#include "show_security.h"
#include "show_system_properties.h"
#include "show_system_status.h"
#include "show_system_timing.h"
#include "show_table.h"
#include "show_table_metadata.h"
#include "show_tables_by_type.h"
#include "show_triggers.h"
#include "show_types.h"
#include "update_records.h"
#include "update_records_by_series.h"
#include "visualize_image.h"
#include "visualize_image_chart.h"
#include "visualize_image_classbreak.h"
#include "visualize_image_contour.h"
#include "visualize_image_heatmap.h"
#include "visualize_image_labels.h"
#include "visualize_video.h"
#include "visualize_video_heatmap.h"

#endif
