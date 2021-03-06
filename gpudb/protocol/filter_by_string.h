/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __FILTER_BY_STRING_H__
#define __FILTER_BY_STRING_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #filterByString(const FilterByStringRequest&) const}.
     * <p>
     * Calculates which objects from a table, collection, or view match a
     * string expression for the given string columns. The options
     * 'case_sensitive' can be used to modify the behavior for all modes except
     * 'search'. For 'search' mode details and limitations, see <a
     * href="../../concepts/full_text_search.html" target="_top">Full Text
     * Search</a>.
     */
    struct FilterByStringRequest
    {

        /**
         * Constructs a FilterByStringRequest object with default parameter
         * values.
         */
        FilterByStringRequest() :
            tableName(std::string()),
            viewName(std::string()),
            expression(std::string()),
            mode(std::string()),
            columnNames(std::vector<std::string>()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a FilterByStringRequest object with the specified
         * parameters.
         * 
         * @param[in] tableName_  Name of the table on which the filter
         *                        operation will be performed.  Must be an
         *                        existing table, collection or view.
         * @param[in] viewName_  If provided, then this will be the name of the
         *                       view containing the results. Has the same
         *                       naming restrictions as <a
         *                       href="../../concepts/tables.html"
         *                       target="_top">tables</a>.
         * @param[in] expression_  The expression with which to filter the
         *                         table.
         * @param[in] mode_  The string filtering mode to apply. See below for
         *                   details.
         *                   <ul>
         *                           <li> gpudb::filter_by_string_search: Full
         *                   text search query with wildcards and boolean
         *                   operators. Note that for this mode, no column can
         *                   be specified in @a columnNames; all string columns
         *                   of the table that have text search enabled will be
         *                   searched.
         *                           <li> gpudb::filter_by_string_equals: Exact
         *                   whole-string match (accelerated).
         *                           <li> gpudb::filter_by_string_contains:
         *                   Partial substring match (not accelerated).  If the
         *                   column is a string type (non-charN) and the number
         *                   of records is too large, it will return 0.
         *                           <li> gpudb::filter_by_string_starts_with:
         *                   Strings that start with the given expression (not
         *                   accelerated). If the column is a string type
         *                   (non-charN) and the number of records is too
         *                   large, it will return 0.
         *                           <li> gpudb::filter_by_string_regex: Full
         *                   regular expression search (not accelerated). If
         *                   the column is a string type (non-charN) and the
         *                   number of records is too large, it will return 0.
         *                   </ul>
         * @param[in] columnNames_  List of columns on which to apply the
         *                          filter. Ignored for 'search' mode.
         * @param[in] options_  Optional parameters.
         *                      <ul>
         *                              <li>
         *                      gpudb::filter_by_string_collection_name: Name
         *                      of a collection which is to contain the newly
         *                      created view. If the collection provided is
         *                      non-existent, the collection will be
         *                      automatically created. If empty, then the newly
         *                      created view will be top-level.
         *                              <li>
         *                      gpudb::filter_by_string_case_sensitive: If
         *                      'false' then string filtering will ignore case.
         *                      Does not apply to 'search' mode.
         *                      <ul>
         *                              <li> gpudb::filter_by_string_true
         *                              <li> gpudb::filter_by_string_false
         *                      </ul>
         *                      The default value is
         *                      gpudb::filter_by_string_true.
         *                      </ul>
         * 
         */
        FilterByStringRequest(const std::string& tableName_, const std::string& viewName_, const std::string& expression_, const std::string& mode_, const std::vector<std::string>& columnNames_, const std::map<std::string, std::string>& options_):
            tableName( tableName_ ),
            viewName( viewName_ ),
            expression( expression_ ),
            mode( mode_ ),
            columnNames( columnNames_ ),
            options( options_ )
        {
        }

        std::string tableName;
        std::string viewName;
        std::string expression;
        std::string mode;
        std::vector<std::string> columnNames;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::FilterByStringRequest>
    {
        static void encode(Encoder& e, const gpudb::FilterByStringRequest& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.viewName);
            ::avro::encode(e, v.expression);
            ::avro::encode(e, v.mode);
            ::avro::encode(e, v.columnNames);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::FilterByStringRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.tableName);
                            break;

                        case 1:
                            ::avro::decode(d, v.viewName);
                            break;

                        case 2:
                            ::avro::decode(d, v.expression);
                            break;

                        case 3:
                            ::avro::decode(d, v.mode);
                            break;

                        case 4:
                            ::avro::decode(d, v.columnNames);
                            break;

                        case 5:
                            ::avro::decode(d, v.options);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.tableName);
                ::avro::decode(d, v.viewName);
                ::avro::decode(d, v.expression);
                ::avro::decode(d, v.mode);
                ::avro::decode(d, v.columnNames);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #filterByString(const FilterByStringRequest&) const}.
     * <p>
     * Calculates which objects from a table, collection, or view match a
     * string expression for the given string columns. The options
     * 'case_sensitive' can be used to modify the behavior for all modes except
     * 'search'. For 'search' mode details and limitations, see <a
     * href="../../concepts/full_text_search.html" target="_top">Full Text
     * Search</a>.
     */
    struct FilterByStringResponse
    {

        /**
         * Constructs a FilterByStringResponse object with default parameter
         * values.
         */
        FilterByStringResponse() :
            count(int64_t())
        {
        }

        int64_t count;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::FilterByStringResponse>
    {
        static void encode(Encoder& e, const gpudb::FilterByStringResponse& v)
        {
            ::avro::encode(e, v.count);
        }

        static void decode(Decoder& d, gpudb::FilterByStringResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.count);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.count);
            }
        }
    };
}

#endif
